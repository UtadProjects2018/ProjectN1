//
//  main.cpp
//  ProjectN1
//
//  Created by pc-laptop on 10/28/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include <iostream>
#include "BitsOperation.hpp"

int main(int argc, const char * argv[]) {
    unsigned int character = 0xFFA5A000; //165
    
    printf("Hexadecimal %x, GetNumBullets: %u\n", character, CharacterSystem::CharacterManager::GetNumBullets(character));//Bullets 165
    
    CharacterSystem::CharacterManager::SetBullets(character, 10); //Bullets 175
   
    printf("Hexadecimal %x, GetNumBullets: %u\n", character, CharacterSystem::CharacterManager::GetNumBullets(character));// Bullets 175
    
    printf("Hexadecimal %x, CheckUnlimitedBulletsActive: %u\n", character, CharacterSystem::CharacterManager::CheckUnlimitedBulletsActive(character));//CheckUnlimitedBulletsActive FALSE
    
    CharacterSystem::CharacterManager::ActivateUnlimitedBullets(character);
    
    printf("Hexadecimal %x, CheckUnlimitedBulletsActive: %u\n", character, CharacterSystem::CharacterManager::CheckUnlimitedBulletsActive(character));// CheckUnlimitedBulletsActive TRUE
    
    printf("Hexadecimal %x, GetNumBullets: %u\n", character, CharacterSystem::CharacterManager::GetNumBullets(character));
    
    return 0;
}
