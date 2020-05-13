cmake_minimum_required(VERSION 2.8)
project (dap_server_http_list)

file (GLOB SERVER_HTTP_LIST_SRCS server_list.c)
file (GLOB SERVER_HTTP_LIST_HEADERS server_list.h)

add_library(${PROJECT_NAME} STATIC ${SERVER_HTTP_LIST_HEADERS} ${SERVER_HTTP_LIST_SRCS})

target_link_libraries(
    dap_server_http_list
    dap_core
    dap_crypto 
    dap_http_server
    dap_enc_server
    )
