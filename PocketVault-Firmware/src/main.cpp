/*
Project Name : PocketVault
Author : Vedant

Made for StarDance with ♥
*/

// inclusiuons
#include <Arduino.h>
#include "config.h"
#include "vault.h"
#include "setting.h"

// Global Variables
enum ScreenState
{
  MENU,
  ENTRY_VIEW,
  SETTINGS,
  LOCK_SCREEN
};
ScreenState currentScreen = MENU;

int selectedItem = 0;
int CurrentEntry = 0;

// UI Functions
void moveUp()
{
  if (selectedItem > 0)
  {
    selectedItem--;
  }
  if (selectedItem < 0)
    selectedItem = VAULT_SIZE - 1;
}
void moveDown()
{
  if (selectedItem < VAULT_SIZE - 1)
  {
    selectedItem++;
  }
  if (selectedItem >= VAULT_SIZE)
    selectedItem = 0;
}
void selectItem()
{
  CurrentEntry = selectedItem;
  currentScreen = ENTRY_VIEW;
}
void goBack()
{
  currentScreen = MENU;
}

// Simulate with Serial Monitor (Allows you simulate the menu in a serial moniotor)
void drawMenu()
{
  Serial.println();

  if (currentScreen == MENU)
  {
    Serial.println("=== PocketVault ===");
    for (int i = 0; i < VAULT_SIZE; i++)
    {
      if (i == selectedItem)
      {
        Serial.print("> ");
      }
      else
      {
        Serial.print("  ");
      }
      Serial.println(vault[i].title);
    }
  }
  else
  {
    Serial.println("===Entry===");
    Serial.println(vault[CurrentEntry].title);
    Serial.println();
    Serial.println("Hold = Enter");
    Serial.println("Press = Back");
  }
}

void setup()
{
  Serial.begin(115200);
  Serial.println("PocketVault starting up...");

  // Simulation Purposes Only == DO NOT UNCOMMENT
  drawMenu();

  moveDown();
  drawMenu();

  moveUp();
  drawMenu();
  
  goBack();
  drawMenu();
}
void loop()
{
  // put your main code here, to run repeatedly:
}
