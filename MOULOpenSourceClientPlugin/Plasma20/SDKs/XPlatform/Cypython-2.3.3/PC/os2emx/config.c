/* -*- C -*- ***********************************************
Copyright 1991-1995 by Stichting Mathematisch Centrum, Amsterdam,
The Netherlands.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its
documentation for any purpose and without fee is hereby granted,
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in
supporting documentation, and that the names of Stichting Mathematisch
Centrum or CWI or Corporation for National Research Initiatives or
CNRI not be used in advertising or publicity pertaining to
distribution of the software without specific, written prior
permission.

While CWI is the initial source for this software, a modified version
is made available by the Corporation for National Research Initiatives
(CNRI) at the Internet address ftp://ftp.python.org.

STICHTING MATHEMATISCH CENTRUM AND CNRI DISCLAIM ALL WARRANTIES WITH
REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL STICHTING MATHEMATISCH
CENTRUM OR CNRI BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL
DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
PERFORMANCE OF THIS SOFTWARE.

******************************************************************/

/* Module configuration */

/* This file contains the table of built-in modules.
   See init_builtin() in import.c. */

#include "Python.h"

extern void initos2();
extern void initsignal();
#ifdef WITH_THREAD
extern void initthread();
#endif
extern void init_codecs();
extern void init_csv();
extern void init_locale();
extern void init_random();
extern void init_sre();
extern void init_symtable();
extern void init_weakref();
extern void initarray();
extern void initbinascii();
extern void initcPickle();
extern void initcStringIO();
extern void initcmath();
extern void initdatetime();
extern void initdl();
extern void initerrno();
extern void initfcntl();
extern void initimageop();
extern void inititertools();
extern void initmath();
extern void initmd5();
extern void initoperator();
extern void initpcre();
extern void initregex();
extern void initrgbimg();
extern void initsha();
extern void initstrop();
extern void initstruct();
extern void inittermios();
extern void inittime();
extern void inittiming();
extern void initxreadlines();
extern void initxxsubtype();
extern void initzipimport();
#if !HAVE_DYNAMIC_LOADING
extern void init_curses();
extern void init_curses_panel();
extern void init_hotshot();
extern void init_testcapi();
extern void initbsddb185();
extern void initbz2();
extern void initfpectl();
extern void initfpetest();
extern void initparser();
extern void initpwd();
extern void initrotor();
extern void initunicodedata();
extern void initzlib();
#ifdef USE_SOCKET
extern void init_socket();
extern void initselect();
#endif
#endif
/* -- ADDMODULE MARKER 1 -- */

extern void PyMarshal_Init();
extern void initimp();
extern void initgc();

struct _inittab _PyImport_Inittab[] = {

	{"os2", initos2},
	{"signal", initsignal},
#ifdef WITH_THREAD
	{"thread", initthread},
#endif
	{"_codecs", init_codecs},
	{"_csv", init_csv},
	{"_locale", init_locale},
	{"_random", init_random},
	{"_sre", init_sre},
	{"_symtable", init_symtable},
	{"_weakref", init_weakref},
	{"array", initarray},
	{"binascii", initbinascii},
	{"cPickle", initcPickle},
	{"cStringIO", initcStringIO},
	{"cmath", initcmath},
	{"datetime", initdatetime},
	{"dl", initdl},
	{"errno", initerrno},
	{"fcntl", initfcntl},
	{"imageop", initimageop},
	{"itertools", inititertools},
	{"math", initmath},
	{"md5", initmd5},
	{"operator", initoperator},
	{"pcre", initpcre},
	{"regex", initregex},
	{"rgbimg", initrgbimg},
	{"sha", initsha},
	{"strop", initstrop},
	{"struct", initstruct},
	{"termios", inittermios},
	{"time", inittime},
	{"timing", inittiming},
	{"xreadlines", initxreadlines},
	{"xxsubtype", initxxsubtype},
	{"zipimport", initzipimport},
#if !HAVE_DYNAMIC_LOADING
	{"_curses", init_curses},
	{"_curses_panel", init_curses_panel},
	{"_hotshot", init_hotshot},
	{"_testcapi", init_testcapi},
	{"bsddb185", initbsddb185},
	{"bz2", initbz2},
	{"fpectl", initfpectl},
	{"fpetest", initfpetest},
	{"parser", initparser},
	{"pwd", initpwd},
	{"rotor", initrotor},
	{"unicodedata", initunicodedata},
	{"zlib", initzlib},
#ifdef USE_SOCKET
	{"_socket", init_socket},
	{"select", initselect},
#endif
#endif
/* -- ADDMODULE MARKER 2 -- */

	/* This module "lives in" with marshal.c */
	{"marshal", PyMarshal_Init},

	/* This lives it with import.c */
	{"imp", initimp},

	/* These entries are here for sys.builtin_module_names */
	{"__main__", NULL},
	{"__builtin__", NULL},
	{"sys", NULL},
	{"exceptions", NULL},

	/* This lives in gcmodule.c */
	{"gc", initgc},

	/* Sentinel */
	{0, 0}
};
