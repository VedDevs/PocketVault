#pragma once

struct Setting
{
    const char* name;
};

const Setting settings[] =
{
    {"Display"},
    {"About"}
};

const int SETTINGS_COUNT =
sizeof(settings) / sizeof(settings[0]);