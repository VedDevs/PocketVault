#pragma once

struct PasswordEntry
{
    const char* title;
    const char* password;
};

const PasswordEntry vault[] =
{
    {"GitHub",  "github123"},
    {"Gmail",   "gmail123"},
    {"Discord", "discord123"},
    {"WiFi",    "wifi123"},
    {"Settings",""}
};

const int VAULT_SIZE =
sizeof(vault) / sizeof(vault[0]);