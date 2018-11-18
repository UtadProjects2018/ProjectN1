//
//  BitsOperation.hpp
//  ProjectN1
//
//  Created by pc-laptop on 10/28/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef BitsOperation_hpp
#define BitsOperation_hpp

#include <stdio.h>
enum CharacterBitsMask {bullets = 0x00FF0000, ulimitedBullets = 0x00000002};

namespace CharacterSystem
{
    class CharacterManager
    {
    public:
        static unsigned int GetNumBullets(unsigned int uCharacterInfo);
        static void SetBullets(unsigned int &uCharacterInfo, unsigned int newBullets);
        static bool CheckUnlimitedBulletsActive(unsigned int uCharacterInfo);
        static void ActivateUnlimitedBullets(unsigned int &uCharacterInfo);
    };
}

#endif /* BitsOperation_hpp */
