#include "httplib.h"
#include "logic.h"
#include <iostream>

int main() {
    httplib::Server svr;

    svr.set_default_headers({
        {"Access-Control-Allow-Origin", "*"},
        {"Access-Control-Allow-Methods", "GET, OPTIONS"},
        {"Access-Control-Allow-Headers", "Content-Type"}
    });

    svr.Options(R"(.*)", [](const httplib::Request&, httplib::Response& res) {
        res.status = 200;
    });

    svr.Get("/api/grade", [](const httplib::Request& req, httplib::Response& res) {
        int score = std::stoi(req.get_param_value("score"));
        res.set_content("{\"result\":\"" + calculateGrade(score) + "\"}", "application/json");
    });

    svr.Get("/api/discount", [](const httplib::Request& req, httplib::Response& res) {
        int amount = std::stoi(req.get_param_value("amount"));
        res.set_content("{\"result\":" + std::to_string(calculateDiscount(amount)) + "}", "application/json");
    });

    svr.Get("/api/booking", [](const httplib::Request& req, httplib::Response& res) {
        int seats = std::stoi(req.get_param_value("seats"));
        std::string ok = canBookSeats(seats) ? "true" : "false";
        res.set_content("{\"result\":" + ok + "}", "application/json");
    });

    svr.Get("/api/username", [](const httplib::Request& req, httplib::Response& res) {
        std::string name = req.get_param_value("name");
        res.set_content("{\"result\":\"" + formatUsername(name) + "\"}", "application/json");
    });

    std::cout << "Server listening on http://0.0.0.0:8080\n";
    svr.listen("0.0.0.0", 8080);
}
