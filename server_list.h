/**
*/

#ifndef SERVER_LIST_H
#define SERVER_LIST_H

#include "dap_enc_http.h"
#include <stdbool.h>

struct dap_http;

static char typical_adress[] = "255.255.255.255";

/*
  Данная структура будет приемником от клиента, и генерации отчета для админа.
  Админ будет манипулировать руками со списком.
  Сервер же будет рассылать данные в виде массива байт из файла как есть (если файл изменился, или сумма файла клиента при логине отличается от серверной)
*/
typedef struct server_info
{
    char name[50];
    char address[sizeof(typical_adress)];
    char  port[50];
    ///int  mods; // todo create mods enum? or make this char[] type
    char user_name[50];
} server_info_t;


extern int server_list_module_init(const char * servers_list_path);
extern void server_list_module_deinit();
extern void server_list_add_proc(struct dap_http * sh, const char * url);

#endif
