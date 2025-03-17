# Latest Avidemux ports for FreeBSD

I have created FreeBSD ports for latest Avidemux (https://github.com/mean00/avidemux2).

You can download these files and overwrite ports tree, or use ports overlays method.
I recommend using ports overlays method.

## ports overlay method

Add in your `/etc/make.conf` as follows:

`OVERLAYS+=/your/download/directory/avidemux-ports`

If you use poudriere, you may need to add to `/etc/make.conf` as follows:

    .ifndef POUDRIERE_BUILD_TYPE
    OVERLAYS+=/your/download/directory/avidemux-ports
    .endif
