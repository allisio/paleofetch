paleofetch
==========

A rewrite of [neofetch](https://github.com/dylanaraps/neofetch) in C.
Currently only supports Linux and Xorg.

Example output:

![example output](example.png)

Compiling
---------

    make install

Usage
-----

After compiling, simply run the executable:

    paleofetch

By default, `paleofetch` will cache certain  information (in `$XDG_CACHE_HOME/paleofetch`)
to speed up subsequent calls. To ignore the contents of the cache (and repopulate it), run

    paleofetch --recache

The cache file can safely be removed at any time, paleofetch will repopulate it
if it is absent.

Configuration
-------------

TODO: Write a guide for configuring paleofetch

FAQ
---

Q: Do you really run neofetch every time you open a terminal?  
A: Yes, I like the way it looks and like that it causes my prompt to start midway
down the screen. I do acknowledge that the information it presents is not actually useful.
