# ign-common3

编译顺序：5

依赖：

- tinyxml2-devel -> yum
- uuid-devel -> yum
- ffmpeg -> yum
- libavdevice -> yum
- ffmpeg-devel -> yum

```
build gts from source
wget https://gts.sourceforge.net/tarballs/gts-snapshot-121130.tar.gz
./configure
make
export PKG_CONFIG_PATH=/usr/local/lib/pkgconfig:$PKG_CONFIG_PATH
```