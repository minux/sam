/* Copyright (c) 1998 Lucent Technologies - All rights reserved. */
#include <u.h>
#include <libc.h>
#include <libg.h>

Cursor bullseye={
	{-7, -7},
	{0x1F, 0xF8, 0x3F, 0xFC, 0x7F, 0xFE, 0xFB, 0xDF,
	 0xF3, 0xCF, 0xE3, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF,
	 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0xC7, 0xF3, 0xCF,
	 0x7B, 0xDF, 0x7F, 0xFE, 0x3F, 0xFC, 0x1F, 0xF8,},
	{0x00, 0x00, 0x0F, 0xF0, 0x31, 0x8C, 0x21, 0x84,
	 0x41, 0x82, 0x41, 0x82, 0x41, 0x82, 0x7F, 0xFE,
	 0x7F, 0xFE, 0x41, 0x82, 0x41, 0x82, 0x41, 0x82,
	 0x21, 0x84, 0x31, 0x8C, 0x0F, 0xF0, 0x00, 0x00,}
};
Cursor deadmouse={
	{-7, -7},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	 0x00, 0x00, 0x00, 0x0C, 0x00, 0x8E, 0x1D, 0xC7,
	 0xFF, 0xE3, 0xFF, 0xF3, 0xFF, 0xFF, 0x7F, 0xFE, 
	 0x3F, 0xF8, 0x17, 0xF0, 0x03, 0xE0, 0x00, 0x00,},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x82,
	 0x04, 0x41, 0xFF, 0xE1, 0x5F, 0xF1, 0x3F, 0xFE, 
	 0x17, 0xF0, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00,}
};
Cursor lockarrow={
	{-7, -7},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x0F, 0xC0,
	 0x03, 0xC0, 0x07, 0xC0, 0x0E, 0xC0, 0x1C, 0xC0,
	 0x38, 0x00, 0x70, 0x00, 0xE0, 0xDB, 0xC0, 0xDB,}
};

uchar darkgreybits[] = {
	0xDD, 0xDD, 0x77, 0x77, 0xDD, 0xDD, 0x77, 0x77,
	0xDD, 0xDD, 0x77, 0x77, 0xDD, 0xDD, 0x77, 0x77,
	0xDD, 0xDD, 0x77, 0x77, 0xDD, 0xDD, 0x77, 0x77,
	0xDD, 0xDD, 0x77, 0x77, 0xDD, 0xDD, 0x77, 0x77,
};

Bitmap	*darkgrey;

void
iconinit(void)
{
	darkgrey = balloc(Rect(0, 0, 16, 16), 0);
	wrbitmap(darkgrey, 0, 16, darkgreybits);
}