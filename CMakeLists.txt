cmake_minimum_required(VERSION 3.10)

set(PROJECT_SRC_DIR ./src)

project(mess)

add_executable( mess
                ${PROJECT_SRC_DIR}/main.cpp
                ${PROJECT_SRC_DIR}/user.cpp
                ${PROJECT_SRC_DIR}/user.h
                ${PROJECT_SRC_DIR}/email.cpp
                ${PROJECT_SRC_DIR}/email.h
                ${PROJECT_SRC_DIR}/topic.cpp
                ${PROJECT_SRC_DIR}/topic.h
                ${PROJECT_SRC_DIR}/message.cpp
                ${PROJECT_SRC_DIR}/message.h
                ${PROJECT_SRC_DIR}/subject.cpp
                ${PROJECT_SRC_DIR}/subject.h
                ${PROJECT_SRC_DIR}/attachament.cpp
                ${PROJECT_SRC_DIR}/attachament.h)