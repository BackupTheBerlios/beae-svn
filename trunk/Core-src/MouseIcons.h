/*
   	Copyright (c) 2003, Xentronix
	Author: Frans van Nispen (frans@xentronix.com)
	All rights reserved.
	
	Redistribution and use in source and binary forms, with or without modification,
	are permitted provided that the following conditions are met:
	
	Redistributions of source code must retain the above copyright notice, this list
	of conditions and the following disclaimer. Redistributions in binary form must
	reproduce the above copyright notice, this list of conditions and the following
	disclaimer in the documentation and/or other materials provided with the distribution. 
	
	Neither the name of Xentronix nor the names of its contributors may be used
	to endorse or promote products derived from this software without specific prior
	written permission. 
	
	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
	EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
	OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
	SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
	PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
	INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
	LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
	OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef MOUSE_ICONS_H
#define MOUSE_ICONS_H

const uint8 IMouse_Arrow[] = { 0x10, 0x01, 0x00, 0x00,
   0x80, 0x00, 0xC0, 0x00, 0xA0, 0x00, 0x90, 0x00,
   0x88, 0x00, 0x84, 0x00, 0x82, 0x00, 0x81, 0x00,
   0x80, 0x80, 0x87, 0xC0, 0x92, 0x00, 0xB2, 0x00,
   0xC9, 0x00, 0x89, 0x00, 0x04, 0x80, 0x07, 0x00,
   0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00,
   0xF8, 0x00, 0xFC, 0x00, 0xFE, 0x00, 0xFF, 0x00,
   0xFF, 0x80, 0xFF, 0xC0, 0xFE, 0x00, 0xFE, 0x00,
   0xCF, 0x00, 0x8F, 0x00, 0x07, 0x80, 0x07, 0x00
};

const uint8 IMouse_ArrowLeft[] = { 0x10, 0x01, 0x00, 0x00,
	0x80, 0x00, 0xC0, 0x00, 0xA0, 0x00, 0x90, 0x00,
	0x88, 0x00, 0x84, 0x00, 0x82, 0x00, 0x81, 0x70,
	0x80, 0xD0, 0x87, 0xD0, 0x92, 0x50, 0xB2, 0x50,
	0xC9, 0x50, 0x89, 0x5F, 0x04, 0xC1, 0x07, 0x7F,
	0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00,
	0xF8, 0x00, 0xFC, 0x00, 0xFE, 0x00, 0xFF, 0x70,
	0xFF, 0xF0, 0xFF, 0xF0, 0xFE, 0x70, 0xFE, 0x70,
	0xCF, 0x70, 0x8F, 0x7F, 0x07, 0xFF, 0x07, 0x7F
};

const uint8 IMouse_ArrowRight[] = { 0x10, 0x01, 0x00, 0x00,
	0x80, 0x00, 0xC0, 0x00, 0xA0, 0x00, 0x90, 0x00,
	0x88, 0x00, 0x84, 0x00, 0x82, 0x00, 0x81, 0x7C,
	0x80, 0xC2, 0x87, 0xDD, 0x92, 0x5D, 0xB2, 0x42,
	0xC9, 0x5D, 0x89, 0x55, 0x04, 0xD5, 0x07, 0x77,
	0x80, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00,
	0xF8, 0x00, 0xFC, 0x00, 0xFE, 0x00, 0xFF, 0x7C,
	0xFF, 0xFE, 0xFF, 0xFF, 0xFE, 0x7F, 0xFE, 0x7E,
	0xCF, 0x7F, 0x8F, 0x77, 0x07, 0xF7, 0x07, 0x77
};

const uint8 IMouse_LeftRight[] = { 0x10, 0x01, 0x07, 0x07,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x08, 0x10, 0x10, 0x08, 0x20, 0x04, 0x7F, 0xFE,
	0x20, 0x04, 0x10, 0x08, 0x08, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10,
	0x1C, 0x38, 0x38, 0x1C, 0x7F, 0xFE, 0xFF, 0xFF,
	0x7F, 0xFE, 0x38, 0x1C, 0x1C, 0x38, 0x08, 0x10,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8 IMouse_Move[] = { 0x10, 0x01, 0x07, 0x07,
   0x00, 0x00, 0x01, 0x00, 0x03, 0x80, 0x07, 0xC0,
   0x01, 0x00, 0x11, 0x10, 0x31, 0x18, 0x7F, 0xFC,
   0x31, 0x18, 0x11, 0x10, 0x01, 0x00, 0x07, 0xC0,
   0x03, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x01, 0x00, 0x03, 0x80, 0x07, 0xC0, 0x07, 0xC0,
   0x03, 0x80, 0x33, 0x98, 0x7F, 0xFC, 0xFF, 0xFE,
   0x7F, 0xFC, 0x33, 0x98, 0x03, 0x80, 0x07, 0xC0,
   0x07, 0xC0, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00
};

const uint8 IMouse_Pencil[] = { 0x10, 0x01, 0x0f, 0x00,
   0x00, 0x00, 0x00, 0x0e , 0x00, 0x1e, 0x00, 0x3e,
   0x00, 0x5c, 0x00, 0x88 , 0x01, 0x10, 0x02, 0x20, 
   0x04, 0x40, 0x08, 0x80, 0x11, 0x00, 0x22, 0x00, 
   0x64, 0x00, 0x78, 0x00, 0xf0, 0x00, 0xc0, 0x00,
   0x00, 0x00, 0x00, 0x0e, 0x00, 0x12, 0x00, 0x32,
   0x00, 0x7c, 0x00, 0xf8, 0x01, 0xf0, 0x03, 0xe0,
   0x07, 0xc0, 0x0f, 0x80, 0x1f, 0x00, 0x3e, 0x00,
   0x7c, 0x00, 0x78, 0x00, 0xf0, 0x00, 0xc0, 0x00
};


const uint8 IMouse_MoveArrow[] = { 0x10, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x40, 0x00, 0x60, 0x00, 0x70, 0x00,
   0x78, 0x00, 0x7C, 0x00, 0x7E, 0x20, 0x70, 0x70,
   0x60, 0x20, 0x41, 0x24, 0x03, 0xFE, 0x01, 0x24,
   0x00, 0x20, 0x00, 0x70, 0x00, 0x20, 0x00, 0x00,
   0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0xF8, 0x00,
   0xFC, 0x00, 0xFE, 0x20, 0xFF, 0x70, 0xFE, 0xF8,
   0xF1, 0x74, 0xE3, 0xFE, 0x47, 0xFF, 0x03, 0xFE,
   0x01, 0x74, 0x00, 0xF8, 0x00, 0x70, 0x00, 0x20
};

#endif