# amifldrv
AMI BIOS Flash Driver *NEW*

This is a more complete ami flash driver.

It works with afulnx but it includes also all functions used by scelnx.

How it works:
afulnx passes a structure in IOCTL 4160 (ALLOC) and reads the buffer to dump the BIOS.

then uses 4161 to FREE the buffer allocated.

More reversing is needed.

You are welcome to continue and post your results!
