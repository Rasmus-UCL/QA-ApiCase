# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/rakl5927/Downloads/cpp-api-blackbox-gitlab-case/cpp-api-blackbox-gitlab-case/app/build/_deps/cpp_httplib-src"
  "C:/Users/rakl5927/Downloads/cpp-api-blackbox-gitlab-case/cpp-api-blackbox-gitlab-case/app/build/_deps/cpp_httplib-build"
  "C:/Users/rakl5927/Downloads/cpp-api-blackbox-gitlab-case/cpp-api-blackbox-gitlab-case/app/build/_deps/cpp_httplib-subbuild/cpp_httplib-populate-prefix"
  "C:/Users/rakl5927/Downloads/cpp-api-blackbox-gitlab-case/cpp-api-blackbox-gitlab-case/app/build/_deps/cpp_httplib-subbuild/cpp_httplib-populate-prefix/tmp"
  "C:/Users/rakl5927/Downloads/cpp-api-blackbox-gitlab-case/cpp-api-blackbox-gitlab-case/app/build/_deps/cpp_httplib-subbuild/cpp_httplib-populate-prefix/src/cpp_httplib-populate-stamp"
  "C:/Users/rakl5927/Downloads/cpp-api-blackbox-gitlab-case/cpp-api-blackbox-gitlab-case/app/build/_deps/cpp_httplib-subbuild/cpp_httplib-populate-prefix/src"
  "C:/Users/rakl5927/Downloads/cpp-api-blackbox-gitlab-case/cpp-api-blackbox-gitlab-case/app/build/_deps/cpp_httplib-subbuild/cpp_httplib-populate-prefix/src/cpp_httplib-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/rakl5927/Downloads/cpp-api-blackbox-gitlab-case/cpp-api-blackbox-gitlab-case/app/build/_deps/cpp_httplib-subbuild/cpp_httplib-populate-prefix/src/cpp_httplib-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/rakl5927/Downloads/cpp-api-blackbox-gitlab-case/cpp-api-blackbox-gitlab-case/app/build/_deps/cpp_httplib-subbuild/cpp_httplib-populate-prefix/src/cpp_httplib-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
