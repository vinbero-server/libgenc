#!/usr/bin/sh
autoreconf --install && ./configure && make && sudo make install && git clean -df
