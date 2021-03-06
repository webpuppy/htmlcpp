#pragma once
#include <string>
#include <fmt/core.h>
#include "fmt/format.h"
using std::string;
// ast to integrate with parser for the configured files

namespace htmlc_parser {
    const string assign = "=";
    const string open_scope = "<!--@htmlc|";
    const string close_scope = "|@htmlc-->";
    const string str_render = "@render";
    const string str_loop = "@loop";
    const string str_chunk = "@chunk";

    const string dir_chunk = str_chunk + assign;

    string to_directive(string directive, string key) {
        return open_scope + directive + assign + key + close_scope;
    }

    bool is_static(string content) {
        return content.find(open_scope) == string::npos;
    }
}