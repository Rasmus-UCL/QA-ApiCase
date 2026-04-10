# C++ API Black Box Case

Dette projekt er lavet som undervisningscase til IT-teknologstuderende.

## Idé
- Backend er skrevet i C++.
- Browseren fungerer som simpel klient, der kalder API-endpoints.
- Fejlene ligger i den C++-kode, som de studerende er mest fortrolige med.
- De studerende kan først teste som black box via browser eller API-kald.
- Derefter kan de læse kildekode, køre tests og bruge GitLab CI/CD.

## Endpoints
- `/api/grade?score=...`
- `/api/discount?amount=...`
- `/api/booking?seats=...`
- `/api/username?name=...`

## Forventede krav
1. Grade: A for 90-100, B for 80-89, C for 70-79, D for 60-69, F for 0-59, Ugyldig udenfor interval.
2. Discount: 0 for 0-99, 10 for 100-499, 20 for 500-1000, -1 for ugyldig.
3. Booking: kun 1 til 5 er gyldige.
4. Username: trim whitespace, bevar store/små bogstaver, tom streng bliver `Ugyldig`.

## Lokal kørsel
1. `httplib.h` hentes automatisk via CMake, hvis den ikke allerede ligger i `external/`.
2. Kør `cmake -S . -B build`.
3. Kør `cmake --build build`.
4. Start API med `./build/quality_api`.
5. Åbn `web/index.html` i browseren.
6. Kør tests med `./build/quality_tests`.
