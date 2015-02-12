#	Copyright (c) 1998 Lucent Technologies - All rights reserved.
#	Changes Copyright (c) 2014-2015 Rob King
#
#	master makefile for sam.  configure sub-makefiles first.
#

all:	lutil lXg lframe rsamdir samdir samtermdir docdir

lutil:
	cd lib9; $(MAKE)

lXg:
	cd libXg; $(MAKE)
lframe:
	cd libframe; $(MAKE)

docdir:
	cd doc; $(MAKE)

rsamdir:
	cd rsam; $(MAKE)

samdir:
	cd sam; $(MAKE)

samtermdir:
	cd samterm; $(MAKE)

install:
	cd lib9; $(MAKE) install
	cd libXg; $(MAKE) install
	cd libframe; $(MAKE) install
	cd sam; $(MAKE) install
	cd samterm; $(MAKE) install
	cd doc; $(MAKE) install
	cd rsam; $(MAKE) install

clean:
	cd lib9; $(MAKE) clean
	cd libXg; $(MAKE) clean
	cd libframe; $(MAKE) clean
	cd sam; $(MAKE) clean
	cd samterm; $(MAKE) clean
	cd rsam; $(MAKE) clean

nuke:
	cd lib9; $(MAKE) nuke
	cd libXg; $(MAKE) nuke
	cd libframe; $(MAKE) nuke
	cd sam; $(MAKE) nuke
	cd samterm; $(MAKE) nuke
