# Copyright 2014-2014 Rob King <jking@deadpixi.com>

include ../config.mk

all: sam.1.pdf

sam.1.pdf: sam.1
	tbl $< | groff -mdoc -Tpdf > $@

install: sam.1 B
	mkdir -p "$(MANDIR)" "$(BINDIR)"
	cp sam.1 "$(MANDIR)"
	cp B "$(BINDIR)"
	ln -sf "$(MANDIR)/sam.1" "$(MANDIR)/B.1"
	ln -sf "$(MANDIR)/sam.1" "$(MANDIR)/samterm.1"
	ln -sf "$(MANDIR)/sam.1" "$(MANDIR)/rsam.1"
	ln -sf "$(MANDIR)/sam.1" "$(MANDIR)/sam.save.1"
	ln -sf "$(MANDIR)/sam.1" "$(MANDIR)/samsave.1"

