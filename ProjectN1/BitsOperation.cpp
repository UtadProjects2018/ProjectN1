//
//  BitsOperation.cpp
//  ProjectN1
//
//  Created by pc-laptop on 10/28/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "BitsOperation.hpp"

unsigned int CharacterSystem::CharacterManager::GetNumBullets(unsigned int uCharacterInfo)
{
    uCharacterInfo &= bullets;
    uCharacterInfo >>= 16;
    return uCharacterInfo;
}

void CharacterSystem::CharacterManager::SetBullets(unsigned int &uCharacterInfo, unsigned int newBullets)
{
    unsigned int characterBullets = uCharacterInfo & bullets;;
    newBullets <<= 16;
    characterBullets += newBullets;
    uCharacterInfo += newBullets;
}

bool CharacterSystem::CharacterManager::CheckUnlimitedBulletsActive(unsigned int uCharacterInfo)
{
    uCharacterInfo &= ulimitedBullets;
    return uCharacterInfo != 0;
}

void CharacterSystem::CharacterManager::ActivateUnlimitedBullets(unsigned int &uCharacterInfo)
{
    uCharacterInfo |= ulimitedBullets;
}
