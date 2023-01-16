/**
 * @file main.cpp
 * @author Forairaaaaa
 * @brief
 * @version 0.1
 * @date 2023-01-16
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>

#define LGFX_USE_V1
#include <LovyanGFX.hpp>
#include <LGFX_AUTODETECT.hpp>

static LGFX Lcd(320, 240);
static LGFX_Sprite Screen(&Lcd);



void setup()
{
    Lcd.init();
    Screen.createSprite(Lcd.width(), Lcd.height());

    Screen.setTextScroll(true);
}



static int shit = 0;

void loop()
{
    Lcd.fillScreen(TFT_RED);
    std::cout << "RED\n";
    SDL_Delay(1000);

    Lcd.fillScreen(TFT_GREEN);
    std::cout << "GREEN\n";
    SDL_Delay(1000);

    Lcd.fillScreen(TFT_BLUE);
    std::cout << "BLUE\n";
    SDL_Delay(1000);
}

