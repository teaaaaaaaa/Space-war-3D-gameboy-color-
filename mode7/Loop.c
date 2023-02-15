#include <gbdk/platform.h>
#include "spriteGraphics.h"
#include "triangleMap.h"
#include "backgroundGraphics.h"
#include "hUGEDriver.h"
#include "textMap.h"
#include "textGraphics.h"
#include "sample_player.h"
#include "explosionSFX.h"
#include "laserSFX.h"
#include <string.h>
#include <rand.h>

extern hUGESong_t BGM;

uint8_t interruptOffset;
uint16_t slopeStartY;
uint16_t slopeX;
uint32_t slopeY;
uint16_t scrollZ;
uint8_t slopeTileY;
uint16_t slopeYCounter;
uint16_t slopeHeight;
uint16_t downshiftedSlopeTileY;
uint8_t joyState;
int8_t spriteX;
int8_t spriteY;
int16_t downshiftedSpriteX;
int16_t downshiftedSpriteY;
uint16_t spriteZ;
uint16_t staticSpriteZ;
uint8_t visualSpriteX;
uint8_t visualSpriteY;
int16_t spriteXIndex;
int16_t staticSpriteXIndex;
int8_t bulletX;
int8_t bulletY;
uint8_t spriteFrame;
int8_t ballSpeedY;
uint8_t interruptTablePointer;
uint16_t tablePointerWide;
uint8_t tableCounter;
uint8_t tableCounter2;
uint8_t moveCounter;
int16_t skewX;
uint8_t counter;
uint8_t OAMIndex;
uint8_t scrollCounter;
uint8_t spriteIndexOffset;
uint8_t spriteTableIndex;
uint8_t oldSkewX;
uint8_t oldSkewXFG;
int16_t shipSpriteX;
int16_t shipSpriteY;
uint8_t Multiplier;
uint16_t operand;
UBYTE c0;
BOOLEAN moveDirection;
BOOLEAN birdHitBonus;
BOOLEAN startFlag;
BOOLEAN gameOverFlag;
BOOLEAN isAHeld;
BOOLEAN isStartHeld;
BOOLEAN isPhysicsEnabled;
BOOLEAN isExecuting;
BOOLEAN hugeWaveFlag;
BOOLEAN bulletSpriteActive;

int8_t spriteXPositions[] =
{
-50,
50,
50,
-50,
-50,
50,
50,
-50,
};

int16_t spriteZPositions[] =
{
0,
-100,
-200,
-300,
-400,
-500,
-600,
-700,
};

const unsigned char spriteXOffsets[] =
{
4,0,4,0,4,0,0,8,0,8,0,
0,4,0,4,0,4,0,8,0,8,0
};

const unsigned char spriteTileIndexes[] =
{
8,255,10,255,12,255,14,16,255,20,18,255,
22,255,24,255,26,255,30,28,255,32,34,255
};

const unsigned char spriteTableOffsets[] =
{
0,2,4,6,9,
12,14,16,18,21
};

void multiply0()
{
operand = 0;
}

void multiply1()
{
operand = operand;
}

void multiply2()
{
operand = operand << 1;
}

void multiply3()
{
operand = (operand << 1) + operand;
}

void multiply4()
{
operand = operand << 2;
}

void multiply5()
{
operand = (operand << 2) + operand;
}

void multiply6()
{
operand = (operand << 2) + (operand << 1);
}

void multiply7()
{
operand = (operand << 2) + (operand << 1) + operand;
}

void multiply8()
{
operand = operand << 3;
}

void multiply9()
{
operand = (operand << 3) + operand;
}

void multiply10()
{
operand = (operand << 3) + (operand << 1);
}

void multiply11()
{
operand = (operand << 3) + (operand << 1) + operand;
}

void multiply12()
{
operand = (operand << 3) + (operand << 2);
}

void multiply13()
{
operand = (operand << 3) + (operand << 2) + operand;
}

void multiply14()
{
operand = (operand << 3) + (operand << 2) + (operand << 1);
}

void multiply15()
{
operand = (operand << 3) + (operand << 2) + (operand << 1) + operand;
}

void multiply16()
{
operand = (operand << 4);
}

void multiply17()
{
operand = (operand << 4) + operand;
}

void multiply18()
{
operand = (operand << 4) + (operand << 1);
}

void multiply19()
{
operand = (operand << 4) + (operand << 1) + operand;
}

void multiply20()
{
operand = (operand << 4) + (operand << 2);
}

void multiply21()
{
operand = (operand << 4) + (operand << 2) + operand;
}

void multiply22()
{
operand = (operand << 4) + (operand << 2) + (operand << 1);
}

void multiply23()
{
operand = (operand << 4) + (operand << 2) + (operand << 1) + operand;
}

void multiply24()
{
operand = (operand << 4) + (operand << 3);
}

void multiply25()
{
operand = (operand << 4) + (operand << 3) + operand;
}

void multiply26()
{
operand = (operand << 4) + (operand << 3) + (operand << 1);
}

void multiply27()
{
operand = (operand << 4) + (operand << 3) + (operand << 1) + operand;
}

void multiply28()
{
operand = (operand << 4) + (operand << 3) + (operand << 2);
}

void multiply29()
{
operand = (operand << 4) + (operand << 3) + (operand << 2) + operand;
}

void multiply30()
{
operand = (operand << 4) + (operand << 3) + (operand << 2) + (operand << 1);
}

void multiply31()
{
operand = (operand << 4) + (operand << 3) + (operand << 2) + (operand << 1) + operand;
}

void multiply32()
{
operand = operand << 5;
}

void multiply33()
{
operand = (operand << 5) + operand;
}

void multiply34()
{
operand = (operand << 5) + (operand << 1);
}

void multiply35()
{
operand = (operand << 5) + (operand << 1) + operand;
}

void multiply36()
{
operand = (operand << 5) + (operand << 2);
}

void multiply37()
{
operand = (operand << 5) + (operand << 2) + operand;
}

void multiply38()
{
operand = (operand << 5) + (operand << 2) + (operand << 1);
}

void multiply39()
{
operand = (operand << 5) + (operand << 2) + (operand << 1) + operand;
}

void multiply40()
{
operand = (operand << 5) + (operand << 3);
}

void multiply41()
{
operand = (operand << 5) + (operand << 3) + operand;
}

void multiply42()
{
operand = (operand << 5) + (operand << 3) + (operand << 1);
}

void multiply43()
{
operand = (operand << 5) + (operand << 3) + (operand << 1) + operand;
}

void multiply44()
{
operand = (operand << 5) + (operand << 3) + (operand << 2);
}

void multiply45()
{
operand = (operand << 5) + (operand << 3) + (operand << 2) + operand;
}

void multiply46()
{
operand = (operand << 5) + (operand << 3) + (operand << 2) + (operand << 1);
}

void multiply47()
{
operand = (operand << 5) + (operand << 3) + (operand << 2) + (operand << 1) + operand;
}

void multiply48()
{
operand = (operand << 5) + (operand << 4);
}

void multiply49()
{
operand = (operand << 5) + (operand << 4) + operand;
}

void multiply50()
{
operand = (operand << 5) + (operand << 4) + (operand << 1);
}

void multiply51()
{
operand = (operand << 5) + (operand << 4) + (operand << 1) + operand;
}

void multiply52()
{
operand = (operand << 5) + (operand << 4) + (operand << 2);
}

void multiply53()
{
operand = (operand << 5) + (operand << 4) + (operand << 2) + operand;
}

void multiply54()
{
operand = (operand << 5) + (operand << 4) + (operand << 2) + (operand << 1);
}

void multiply55()
{
operand = (operand << 5) + (operand << 4) + (operand << 2) + (operand << 1) + operand;
}

void multiply56()
{
operand = (operand << 5) + (operand << 4) + (operand << 3);
}

void multiply57()
{
operand = (operand << 5) + (operand << 4) + (operand << 3) + operand;
}

void multiply58()
{
operand = (operand << 5) + (operand << 4) + (operand << 3) + (operand << 1);
}

void multiply59()
{
operand = (operand << 5) + (operand << 4) + (operand << 3) + (operand << 1) + operand;
}

void multiply60()
{
operand = (operand << 5) + (operand << 4) + (operand << 3) + (operand << 2);
}

void multiply61()
{
operand = (operand << 5) + (operand << 4) + (operand << 3) + (operand << 2) + operand;
}

void multiply62()
{
operand = (operand << 5) + (operand << 4) + (operand << 3) + (operand << 2) + (operand << 1);
}

void multiply63()
{
operand = (operand << 5) + (operand << 4) + (operand << 3) + (operand << 2) + (operand << 1) + operand;
}

void multiply64()
{
operand = (operand << 6);
}

const uint16_t codeTable[] =
{
0x0200, //multiply0
0x023F, //multiply1
0x0240, //multiply2
0x0249, //multiply3
0x025B, //multiply4
0x0269, //multiply5
0x027F, //multiply6
0x029D, //multiply7
0x02BD, //multiply8
0x02CB, //multiply9
0x02E5, //multiply10
0x0307, //multiply11
0x032A, //multiply12
0x0350, //multiply13
0x0377, //multiply14
0x03A6, //multiply15
0x03D8, //multiply16
0x03E6, //multiply17
0x0404, //multiply18
0x042A, //multiply19
0x0450, //multiply20
0x047A, //multiply21
0x04A4, //multiply22
0x04D6, //multiply23
0x050B, //multiply24
0x0539, //multiply25
0x0567, //multiply26
0x059D, //multiply27
0x05D6, //multiply28
0x0610, //multiply29
0x064C, //multiply30
0x0690, //multiply31
0x06D7, //multiply32
0x06E5, //multiply33
0x0707, //multiply34
0x0731, //multiply35
0x075A, //multiply36
0x0788, //multiply37
0x07B5, //multiply38
0x07EA, //multiply39
0x0822, //multiply40
0x0854, //multiply41
0x0885, //multiply42
0x08BE, //multiply43
0x08FA, //multiply44
0x0937, //multiply45
0x0976, //multiply46
0x09BD, //multiply47
0x0A07, //multiply48
0x0A3D, //multiply49
0x0A72, //multiply50
0x0AAF, //multiply51
0x0AEF, //multiply52
0x0B30, //multiply53
0x0B73, //multiply54
0x0BBE, //multiply55
0x0C0C, //multiply56
0x0C51, //multiply57
0x0C97, //multiply58
0x0CE5, //multiply59
0x0D36, //multiply60
0x0D88, //multiply61
0x0DDC, //multiply62
0x0E38, //multiply63
0x0E97, //multiply64
};

typedef void (*MultFunc_t)(void);

void VerticalMirror()
{
if (LYC_REG == 31)
{
LYC_REG = 70;
SCX_REG = oldSkewXFG;
}
else
{
SCY_REG = _RAMBANK[LYC_REG];
LCDC_REG = 0xC7;
LYC_REG ++;
}
}

void huge()
{
hUGE_dosound();
isExecuting = 0;
SCX_REG = oldSkewX;
SCY_REG = 8;
LCDC_REG = 0xCF;
LYC_REG = 31;
}

void main() NONBANKED
{
	if (DEVICE_SUPPORTS_COLOR)
	cpu_fast();
	else
	{
	while(1)
	{
	set_bkg_data(0,29,textGraphics);
	set_bkg_submap(0,0,20,18,textMap,20);
	SHOW_BKG;
	}
	}
	initrand(DIV_REG);
	skewX = (48 << 4);
	shipSpriteY = (128 << 4);
	SCX_REG = 40;
	NR52_REG = 0x80;
	NR51_REG = 0xFF;
	NR50_REG = 0x77;
	hUGE_init(&BGM);
	set_bkg_palette_entry(0,0,bgGraphicsCGBPal0c0);
	set_bkg_palette_entry(0,1,bgGraphicsCGBPal0c1);
	set_bkg_palette_entry(0,2,bgGraphicsCGBPal0c2);
	set_bkg_palette_entry(0,3,bgGraphicsCGBPal0c3);
	set_bkg_palette_entry(1,0,bgGraphicsCGBPal1c0);
	set_bkg_palette_entry(1,1,bgGraphicsCGBPal1c1);
	set_bkg_palette_entry(1,2,bgGraphicsCGBPal1c2);
	set_bkg_palette_entry(1,3,bgGraphicsCGBPal1c3);
	set_bkg_palette_entry(2,0,bgGraphicsCGBPal2c0);
	set_bkg_palette_entry(2,1,bgGraphicsCGBPal2c1);
	set_bkg_palette_entry(2,2,bgGraphicsCGBPal2c2);
	set_bkg_palette_entry(2,3,bgGraphicsCGBPal2c3);
	set_bkg_palette_entry(3,0,bgGraphicsCGBPal3c0);
	set_bkg_palette_entry(3,1,bgGraphicsCGBPal3c1);
	set_bkg_palette_entry(3,2,bgGraphicsCGBPal3c2);
	set_bkg_palette_entry(3,3,bgGraphicsCGBPal3c3);
	set_bkg_palette_entry(4,0,bgGraphicsCGBPal4c0);
	set_bkg_palette_entry(4,1,bgGraphicsCGBPal4c1);
	set_bkg_palette_entry(4,2,bgGraphicsCGBPal4c2);
	set_bkg_palette_entry(4,3,bgGraphicsCGBPal4c3);
	set_bkg_palette_entry(5,0,bgGraphicsCGBPal5c0);
	set_bkg_palette_entry(5,1,bgGraphicsCGBPal5c1);
	set_bkg_palette_entry(5,2,bgGraphicsCGBPal5c2);
	set_bkg_palette_entry(5,3,bgGraphicsCGBPal5c3);
	set_bkg_palette_entry(6,0,bgGraphicsCGBPal6c0);
	set_bkg_palette_entry(6,1,bgGraphicsCGBPal6c1);
	set_bkg_palette_entry(6,2,bgGraphicsCGBPal6c2);
	set_bkg_palette_entry(6,3,bgGraphicsCGBPal6c3);
	set_sprite_palette_entry(0,0,spriteGraphicsCGBPal0c0);
	set_sprite_palette_entry(0,1,spriteGraphicsCGBPal0c1);
	set_sprite_palette_entry(0,2,spriteGraphicsCGBPal0c2);
	set_sprite_palette_entry(0,3,spriteGraphicsCGBPal0c3);
	set_sprite_palette_entry(1,0,spriteGraphicsCGBPal1c0);
	set_sprite_palette_entry(1,1,spriteGraphicsCGBPal1c1);
	set_sprite_palette_entry(1,2,spriteGraphicsCGBPal1c2);
	set_sprite_palette_entry(1,3,spriteGraphicsCGBPal1c3);
	set_sprite_palette_entry(2,0,spriteGraphicsCGBPal2c0);
	set_sprite_palette_entry(2,1,spriteGraphicsCGBPal2c1);
	set_sprite_palette_entry(2,2,spriteGraphicsCGBPal2c2);
	set_sprite_palette_entry(2,3,spriteGraphicsCGBPal2c3);
	set_sprite_data(0,36,spriteGraphics);
	set_bkg_data(0,256,bgGraphicsBLK0);
	set_bkg_submap(0,0,32,32,triangleMap,32);
	set_win_submap(0,32,32,32,triangleMap,32);
	VBK_REG = 1;
	set_bkg_data(0,256,bgGraphicsBLK1);
	set_bkg_submap(0,0,32,32,triangleMapPLN1,32);
	set_win_submap(0,32,32,32,triangleMapPLN1,32);
	while(interruptTablePointer < 255)
	{
	_RAMBANK[interruptTablePointer + 289] = slopeY >> 13;
	slopeYCounter += 56;
	slopeY += slopeYCounter;
	interruptTablePointer ++;
	}
	_RAMBANK[288] = 0;
	tableCounter2 = 50;
	counter = 0;
	SVBK_REG = 2;
	while(tableCounter2 > 0)
	{
	tableCounter = 80;
	slopeX = 0;
	while(tableCounter > 0)
	{
	_RAMBANK[tablePointerWide] = (slopeX >> 4);
	tableCounter --;
	slopeX += counter;
	tablePointerWide ++;
	}
	counter += 7;
	tableCounter2 --;
	}
	SVBK_REG = 1;
	DISPLAY_ON;
	SHOW_BKG;
	STAT_REG = 0xC5;
	SHOW_SPRITES;
	SPRITES_8x16;
	add_VBL(huge);

	set_interrupts(LCD_IFLAG|VBL_IFLAG);

	disable_interrupts();
	add_LCD(VerticalMirror);
	enable_interrupts();

	while(1)
	{
	if (isExecuting == 0)
	{
	SHOW_BKG;
	oldSkewX = skewX >> 5;
	oldSkewXFG = skewX >> 4;
	joyState = joypad();
	if (joyState & J_UP)
	{
	}
	if (joyState & J_DOWN)
	{
	}
	if (joyState & J_LEFT)
	{
	if (shipSpriteX > -(24 << 4))
	{
	skewX -= 8;
	shipSpriteX -= 16;
	}
	}
	if (joyState & J_RIGHT)
	{
	if (shipSpriteX < (48 << 4))
	{
	skewX += 8;
	shipSpriteX += 16;
	}
	}
	if (joyState & J_A)
	{
	staticSpriteXIndex ++;
	if (bulletSpriteActive == 0)
	{
	set_sample(3, laserSFX, 2704);
	spriteZPositions[0] = -(scrollZ - 1000);
	spriteXPositions[0] = (downshiftedSpriteX + 24) << 1;
	bulletSpriteActive = 1;
	}
	}
	if (joyState & J_B)
	{
	staticSpriteXIndex --;
	}
	if (moveCounter == 0)
	{
	if (moveDirection == 0)
	moveDirection = 1;
	else
	moveDirection = 0;
	moveCounter = 100;
	}
	moveCounter --;
	//if (moveDirection == 1)
	//staticSpriteZ += 2;
	//else
	//staticSpriteZ -= 2;
	if (gameOverFlag == 0)
	scrollZ += 4;
	slopeStartY = -(scrollZ << 7);
	//slopeX = (48 << 8) + (skewX << 4);
	slopeY = 0;
	slopeYCounter = 0;
	interruptTablePointer = 144;
	OAMIndex = 16;
	spriteIndexOffset = 0;
	if (bulletSpriteActive == 0)
	{
	spriteIndexOffset = 1;
	}
	downshiftedSpriteX = (shipSpriteX >> 4) - 35;
	downshiftedSpriteY = (shipSpriteY >> 4);
	downshiftedSlopeTileY = slopeStartY;
	spriteZPositions[0] -= 10;
	while(spriteIndexOffset < 6)
	{
	spriteZ = scrollZ + spriteZPositions[spriteIndexOffset];
	spriteY = _RAMBANK[((spriteZ >> 3)) + 289];
	spriteFrame = (spriteY >> 3);
	if (spriteFrame > 4)
	{
	spriteFrame = 4;
	}
	if (spriteIndexOffset == 0)
	{
	spriteFrame += 5;
	}
	operand = spriteY + 10;
	if (spriteXPositions[spriteIndexOffset] >= 0)
	{
	Multiplier = spriteXPositions[spriteIndexOffset];
	if (Multiplier > 64)
	{
	Multiplier = 64;
	}
	((MultFunc_t)codeTable[Multiplier])();
	spriteX = (operand >> 6) - (skewX >> 4);
	}
	else
	{
	Multiplier = -(spriteXPositions[spriteIndexOffset]);
	if (Multiplier > 64)
	{
	Multiplier = 64;
	}
	((MultFunc_t)codeTable[Multiplier])();
	spriteX = -(operand >> 6) - (skewX >> 4);
	}
	spriteY += 71;
	if (spriteIndexOffset > 0)
	{
	if (spriteZ > 965 & spriteZ < 1165)
	{
	if (downshiftedSpriteX <= spriteX + 40 & downshiftedSpriteX >= spriteX & downshiftedSpriteY >= spriteY - 32)
	{
	if (gameOverFlag == 0)
	{
	set_sample(2, explosionSFX, 6976);
	scrollCounter = 40;
	gameOverFlag = 1;
	}
	}
	}
	}
	spriteTableIndex = spriteTableOffsets[spriteFrame];
	spriteX += 128;
	if (spriteZ < 1165)
	{
	while(spriteTileIndexes[spriteTableIndex] != 255)
	{
	_RAM[OAMIndex + 1] = spriteX + spriteXOffsets[spriteTableIndex];
	_RAM[OAMIndex] = spriteY;
	_RAM[OAMIndex + 2] = spriteTileIndexes[spriteTableIndex];
	spriteTableIndex ++;
	OAMIndex += 4;
	}
	}
	if (spriteZ >= 1565 & spriteZ < 2165)
	{
	spriteZPositions[spriteIndexOffset] = -scrollZ;
	spriteXPositions[spriteIndexOffset] = (randw()%128) - 64;
	}
	if (spriteIndexOffset == 0)
	{
	bulletX = spriteX;
	bulletY = spriteY;
	if (spriteZ > 2165)
	{
	bulletSpriteActive = 0;
	}
	}
	else
	if (spriteZPositions[0] <= spriteZPositions[spriteIndexOffset] + 32 & bulletSpriteActive == 1)
	{
	if (spriteZPositions[0] >= spriteZPositions[spriteIndexOffset] & bulletX >= spriteX - 16 & bulletX <= spriteX + 16)
	{
	bulletSpriteActive = 0;
	spriteZPositions[0] = 32766;
	spriteZPositions[spriteIndexOffset] = -(scrollZ + 200);
	spriteXPositions[spriteIndexOffset] = (randw()%128) - 64;
	}
	}
	spriteIndexOffset ++;
	}
	visualSpriteX = (shipSpriteX >> 4) + (skewX >> 4);
	visualSpriteY = (shipSpriteY >> 4);
	if (scrollCounter > 0 & play_length == 0)
	{
	scrollZ -= 8;
	scrollCounter --;
	}
	if (scrollCounter == 0)
	{
	gameOverFlag = 0;
	}
	if (gameOverFlag == 0)
	{
	move_sprite(0,visualSpriteX,visualSpriteY);
	move_sprite(1,visualSpriteX + 8,visualSpriteY);
	move_sprite(2,visualSpriteX + 16,visualSpriteY);
	move_sprite(3,visualSpriteX + 24,visualSpriteY);
	set_sprite_tile(0,0);
	set_sprite_tile(1,2);
	set_sprite_tile(2,4);
	set_sprite_tile(3,6);
	}
	else
	{
	hide_sprite(0);
	hide_sprite(1);
	hide_sprite(2);
	hide_sprite(3);
	}
	while(interruptTablePointer > 70)
	{
	_RAMBANK[interruptTablePointer] = ((((slopeY >> 8) << 4) + (slopeTileY >> 4)) - interruptTablePointer);
	slopeYCounter -= 56;
	slopeY -= 56;
	downshiftedSlopeTileY += slopeYCounter;
	slopeTileY = (downshiftedSlopeTileY >> 6);
	interruptTablePointer --;
	}
	while(OAMIndex < 160)
	{
	_RAM[OAMIndex] = 0;
	OAMIndex += 4;
	}
	isExecuting = 1;
	}
	if (counter == 0)
	{
	play_isr();
	counter = 16;
	}
	counter --;
	if (play_length > 0)
	{
	hugeWaveFlag = 1;
	}
	if (play_length == 0 & hugeWaveFlag == 1)
	{
	hUGE_current_wave = 255;
	hugeWaveFlag = 0;
	}
	}
}