e: i386
Source: libxss
Version: 1:1.2.1-2
Depends: libc6 (>= 2.1.3), libx11-6, libxext6, x11-common
Pre-Depends: multiarch-support
Description: X11 Screen Saver extension library
 libXss provides an X Window System client interface to the MIT-SCREEN-SAVER
 extension to the X protocol.
 .
 The Screen Saver extension allows clients behaving as screen savers to
 register themselves with the X server, to better integrate themselves with
 the running session.
 .
 More information about X.Org can be found at:
 <URL:http://www.X.org>
 .
 This module can be found at
 git://anongit.freedesktop.org/git/xorg/lib/libScrnSaver
Original-Maintainer: Debian X Strike Force <debian-x@lists.debian.org>

Package: libxext-dev
Status: install ok installed
Priority: optional
Section: libdevel
Installed-Size: 463
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: libxext
Version: 2:1.3.0-3build1
Depends: libxext6 (= 2:1.3.0-3build1), x11proto-core-dev, x11proto-xext-dev (>= 7.0.99.2), libx11-dev, xorg-sgml-doctools (>= 1:1.5)
Description: X11 miscellaneous extensions library (development headers)
 libXext provides an X Window System client interface to several extensions to
 the X protocol.
 .
 The supported protocol extensions are:
  - DOUBLE-BUFFER (DBE), the Double Buffer extension;
  - DPMS, the VESA Display Power Management System extension;
  - Extended-Visual-Information (EVI), an extension for gathering extra
    information about the X server's visuals;
  - LBX, the Low Bandwidth X extension;
  - MIT-SHM, the MIT X client/server shared memory extension;
  - MIT-SUNDRY-NONSTANDARD, a miscellaneous extension by MIT;
  - Multi-Buffering, the multi-buffering and stereo display extension;
  - SECURITY, the X security extension;
  - SHAPE, the non-rectangular shaped window extension;
  - SYNC, the X synchronization extension;
  - TOG-CUP, the Open Group's Colormap Utilization extension;
  - XC-APPGROUP, the X Consortium's Application Group extension;
  - XC-MISC, the X Consortium's resource ID querying extension;
  - XTEST, the X test extension (this is one of two client-side
    implementations; the other is in the libXtst library, provided by the
    libxtst6 package);
 .
 libXext also provides a small set of utility functions to aid authors of
 client APIs for X protocol extensions.
 .
 This package contains the development headers for the library found in
 libxext6. Non-developers likely have little use for this package.
 .
 More information about X.Org can be found at:
 <URL:http://www.X.org>
 .
 This module can be found at
 git://anongit.freedesktop.org/git/xorg/lib/libXext
Original-Maintainer: Debian X Strike Force <debian-x@lists.debian.org>

Package: libwacom2
Status: install ok installed
Multi-Arch: same
Priority: optional
Section: libs
Installed-Size: 58
Maintainer: Timo Aaltonen <tjaalton@ubuntu.com>
Architecture: i386
Source: libwacom
Version: 0.4-1ubuntu1
Depends: libc6 (>= 2.8), libglib2.0-0 (>= 2.24.0), libgudev-1.0-0 (>= 147), libwacom-common (= 0.4-1ubuntu1)
Pre-Depends: multiarch-support
Description: Wacom model feature query library
 libwacom is a library to identify wacom tablets and their model-specific
 features. It provides easy access to information such as "is this a built-in
 on-screen tablet", "what is the size of this model", etc.

Package: libxkbfile1
Status: install ok installed
Multi-Arch: same
Priority: optional
Section: libs
Installed-Size: 191
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: libxkbfile
Version: 1:1.0.7-1ubuntu0.1
Depends: libc6 (>= 2.7), libx11-6
Pre-Depends: multiarch-support
Description: X11 keyboard file manipulation library
 libxkbfile provides an interface to read and manipulate description files for
 XKB, the X11 keyboard configuration extension.
 .
 More information about X.Org can be found at:
 <URL:http://www.X.org>
 .
 This module can be found at
 git://anongit.freedesktop.org/git/xorg/lib/libxkbfile
Original-Maintainer: Debian X Strike Force <debian-x@lists.debian.org>

Package: lsb-rele3.3.0-2ubuntu3 0.10 openoffice.org-hyphenation-sl 1:3.3.0-7 1:3.3.0-7 hyphen-hyphenation-patterns-sl  c0552b3e9e65821f8bfc0a0f52d7a0cd hyphen-sr 1:3.3.0-2ubuntu3 0.10 openoffice.org-hyphenation-sr 1:3.3.0-7 1:3.3.0-7 hyphen-hyphenation-patterns-sr  4735978c3a91421ba14453dffae5aa17 hyphen-zu 1:3.3.0-2ubuntu3 0.10 openoffice.org-hyphenation-zu 1:3.3.0-7 1:3.3.0-7 hyphen-hyphenation-patterns-zu openoffice.org-hyphenation-ui  1696adb3c6f6f4cc2913131d77a0f5e1 iamerican 3.3.02-5 ienglish-common 3.3.02-5 0.5 ispell-dictionary  b5822be7a8c9b0ed058672fb296cf975 iasl 20100528-3 2.7  546a042e9b2ef09e246447746367fea1 ibmasm-utils 3.0-1ubuntu11 2.4 ibmasm  1492d898c61fc6156c9371da240e8fd5 ibus 1.4.1-3ubuntu1 2.4 2.31.1 2.31.2 2.24.5-4 libibus-1.0-0 2.28.1-2 2.7.1-0ubuntu2 python-ibus 1.4.1-3ubuntu1 ibus-gtk3 ibus-qt4 ibus-clutter ibus-gtk python-appindicator im-config ibus-anthy 1.2 ibus-chewing 1.2.99 ibus-hangul 1.2.99 ibus-m17n 1.2.99 ibus-pinyin 1.2.99 ibus-table 1.2  489faf3b419b10c90a2fd62eb552cc93 1.2.6-2ubuntu1 2.7.1-0ubuntu2 2.8 2.4 2.7 1.2  505c94c7454cb60018e66638b33fc6c0 1.3.10+clean-2 2.4 libchewing3 2.24.0 2.12.0 2.28.1-2 1.3.99.20110419  41b0580d9f7567a74d302851c00d4d6c ibus-doc 1.4.1-3ubuntu1  09048d4e789485a527aee6fb9a9dd253 1.4.1-3ubuntu1 2.4 2.16.0 2.24.5-4 1.14.0  1f9ea675e099fe199fcaa23aae7ef941 1.4.1-3ubuntu1 2.4 2.16.0 3.0.0 1.14.0  bffc1306e64ce23ae551c3e11837360a 1.3.1-3build1 2.7.1-0ubuntu2 2.3.6-6~ 2.24.0 libhangul1 0.1.0 1.3.99  4e243516689250cc0c28c7b8c9ef79a6 1.4.0-1 ibus-pinyin-db-open-phrase 1.4.0-1 ibus-pinyin-db-android 1.4.0-1 2.7.1-0ubuntu2 2.4 1:4.1.1 2.24.0 liblua5.1-0 libopencc1 0.1.0 3.6.11 4.5 2.16 1.3.99.20110419  cbc95a4d4b71d4719d3b69058e9a3ecf 1.4.0-1  67e978cede439d744cf089733cfa9b19 1.3.1-2ubuntu2 2.4 1:4.1.1 libibus-qt1 4.8-1 4:4.7.0~beta1 4:4.5.3 4.1.1  6ee709a5c5263ff0dee81bc6f2628f9b ibus-sunpinyin 2.0.3-3 2.3.6-6~ 1:4.1.1 2.24.0 4.2.1 libsunpinyin3 2.0.3 sunpinyin-data  09535412ce7ac7a2dbc02de8607f3f55 1.3.9.20110827-1ubuntu1 2.7.1-0ubuntu2 1.3.99.20110419  e031a824eef34ac558f88d83af479d09 ibus-table-cangjie 1.3.4-1 ibus-table-cangjie3 ibus-table-cangjie5 ibus-table-cangjie-big  acb60694cc35cb702c2977198bf13ef4 1.3.4-1 1.3.9.20110827  8fedd8c480d9cbf548915bcb43772119 1.3.4-1 1.3.9.20110827  d4a5ff016a00bc9265ad90550fcab2be 1.3.4-1 1.3.9.20110827  59317e407747164d15e633e19cc42e10 ibus-table-erbi 1.3.4-1 1.3.9.20110827  392dfe636cd5717cb1f83161bc72cfb3 ibus-table-extraphrase 1.2.0.20100305-1  01d06f393cb71e1e2c8434088db312c3 ibus-table-wubi 1.3.4-1 1.3.9.20110827  278793ebd142ced486093b43728001bd ibus-table-yong 1.3.4-1 1.3.9.20110827  721d8a21a95b0d10850050efbef1d0b5 ibus-unikey 0.6.1-1 2.4 1:4.1.1 2.24.0 2.12.0 4.4.0 1.3.99  985e023e854ac292f0b39058569a0321 icc-profiles-free 2.0.1+dfsg-1 icc-profiles 2.0-2 2.0-2 2.0-2  6584abf9fda2e191cfa8f85a81a04059 icedtea-6-jre-cacao 6b24-1.11.1-4ubuntu2 6b24-1.11.1-4ubuntu2 2.11 1:4.1.1 4.6 1:1.1.4 icedtea6-jre-cacao  24efc2093c93b3e7670092d00aea59d9 icedtea-6-jre-jamvm 6b24-1.11.1-4ubuntu2 6b24-1.11.1-4ubuntu2 2.4 1:1.1.4  a3b67c2c3683232269f84a02ede3fd4b icedtea-6-plugin 1.2-2ubuntu1 icedtea-netx 1.2-2ubuntu1 2.4 1:4.1.1 2.31.8 2.8.0 4.6 icedtea-gcjwebplugin 1.0-1ubuntu4 icedtea-plugin 1.2~pre1-1~ icedtea6-plugin 6b21.2~pre1-1~ 1.2~pre1-1~ 6b18-1.8.7-3  73779ff36047046383e1c1bd3e13a884 1.2-2ubuntu1 icedtea-netx-common 1.2-2ubuntu1 6b23~pre10~ openjdk-7-jre 6b18-1.8.7-3 6b18-1.8.7-3 6b18-1.8.7-3 6b18-1.8.7-3  052037f44a864c63fefe21804d48141f 1.2-2ubuntu1 6b18-1.8.7-3 6b18-1.8.7-3 1.2~ 1.1.2-1~ 6b18-1.8.7-3 6b18-1.8.7-3  f1e89cc323726441544f1bc048dd4946 1.2-2ubuntu1  6da6e3fbb572567cdab3a35a85e93560 icon-naming-utils 0.8.90-2 libxml-simple-perl  5aaeb0f96a8778a442c08d744b22e0bd iconc 9.4.3-3 2.7 libx11-dev icont icon-ipl  a34813963acf268d978c87854895182c 9.4.3-3 2.7 iconx  32a55e9c6e8ddde3e843ee6c82b54ab5 9.4.3-3 2.7  4afe00cd9fc1151ce65edb169ff82c7f 0.29.1-2 2.8 1.2.13-4 libterm-readline-perl-perl  56989c011716253059b25fa3cebe2594 icu-doc 4.8.1.1-3  85b63ef20f81e6ed56386e76f65f4297 idle 2.7.3-0ubuntu2 2.7.3-0ubuntu2 python-tk 2.4.3-3 idle-pythtions to ease the
 development of other libraries and applications, especially those
 normally found in /lib.
 .
 This package contains the shared library.
Homepage: https://launchpad.net/libnih
Original-Maintainer: Scott James Remnant <scott@netsplit.com>

Package: libubuntuone1.0-cil
Priority: optional
Section: cli-mono
Installed-Size: 92
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: all
Source: libubuntuone
Version: 0.11.0-0ubuntu3
Depends: cli-common (>= 0.5.1), libglib2.0-cil (>= 2.12.10-1ubuntu1), libgtk2.0-cil (>= 2.12.10-1ubuntu1), libmono-corlib4.0-cil (>= 2.10.1), libubuntuone-1.0-1 (>= 0.2.101)
Size: 7618
Description: CLI bindings for Ubuntu One widget library
 This library contains GTK widgets needed for integration of Ubuntu
 One functionalities into GTK applications.
 .
 This package contains assemblies to be used by applications.
Homepage: https://launchpad.net/libubuntuone
Original-Maintainer: Rodrigo Moya <rodrigo.moya@canonical.com>

Package: libglibmm-2.4-1c2a
Multi-Arch: same
Priority: optional
Section: libs
Installed-Size: 1734
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: glibmm2.4
Version: 2.32.0-0ubuntu1
Depends: libc6 (>= 2.4), libgcc1 (>= 1:4.1.1), libglib2.0-0 (>= 2.32.0), libsigc++-2.0-0c2a (>= 2.0.2), libstdc++6 (>= 4.6)
Pre-Depends: multiarch-support
Size: 506218
Description: C++ wrapper for the GLib toolkit (shared libraries)
 GLib is a low-level general-purpose library used mainly by GTK+/GNOME
 applications, but is useful for other programs as well.
 glibmm is the C++ wrapper for GLib.
 .
 This package contains shared libraries.
Homepage: http://www.gtkmm.org/
Original-Maintainer: Deng Xiyue <manphiz-guest@users.alioth.debian.org>

Package: python-reportlab-accel
Priority: optional
Section: python
Installed-Size: 122
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: python-reportlab
Version: 2.5-1.1build1
Replaces: python2.3-reportlab-accel, python2.4-reportlab-accel
Provides: python2.7-reportlab-accel
Depends: python-reportlab (>= 2.5-1.1build1), python2.7, python (>= 2.7), python (<< 2.8), libc6 (>= 2.4)
Conflicts: python2.3-reportlab-accel, python2.4-reportlab-accel
Size: 33124
Description: C coded extension accelerator for the ReportLab Toolkit
 A C coded extension accelerator for the ReportLab Toolkit.
Original-Maintainer: Matthias Klose <doko@debian.org>
Python-Version: 2.7

Package: junit4
Priority: optional
Section: java
Installed-Size: 308
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: all
Version: 4.8.2-2
Depends: default-jre-headless | java5-runtime-headless, libhamcrest-java
Size: 205162
Description: JUnit regression test framework for Java
 JUnit is a simple framework to write repeatable tests. It is an
 instance of the xUnit architecture for unit testing frameworks.
 .
 JUnit 4 uses Java 5 features such as generics and annotations.  If
 you need compatibility with previous Java versions, you should use
 the junit package (version 3) instead.
Original-Maintainer: Debian Java Maintainers <pkg-java-maintainers@lists.alioth.debian.org>
Homepage: http://www.junit.org/

Package: printer-driver-sag-gdi
Priority: optional
Section: text
Installed-Size: 77
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: all
Source: rastertosag-gdi
Version: 0.1-3
Replaces: rastertosag-gdi (<< 0.1-3)
Depends: python, ghostscript
Recommends: cups | foomatic-filters
Breaks: cups (<< 1.5.0-3), rastertosag-gdi (<< 0.1-3)
Size: 9112
Description: printer driver for Ricoh Aficio SP 1000s/SP 1100s
 The rastertosag-gdi driver is an open source Linux driver for the Ricoh Aficio
 SP 1000s/SP 1100s printers. These are some of the few Ricoh printers which do
 not understand PostScript or PCL, but only a proprietary raster format.
Original-Maintainer: Debian Printing Team <debian-printing@lists.debian.org>
Homepage: http://www.openprinting.org/driver/rastertosag-gdi/

Package: libvo-aacenc0
Multi-Arch: same
Prio�Z  J�  ��  *G  �9    G� �Z       �  *G  �9    �� �  L�  8�  +G  �9    �� �Z  M�  G�  +G  �9    �� t  N�  D�  +G  �9    �� �Z  O�  L�  +G  �9    ­ �Z  P�  E�  +G  �9    ӭ �Z  Q�  F�  +G  �9    � �Z  R�  N�  +G  �9    �� �Z  S�  H�  +G  �9    � �Z  T�  I�  +G  �9    � �Z      J�  +G  �9    [� �Z  V�  �  ,G  �9        �Z  W�  �  ,G  �9     l� t  X�  M�  ,G  �9    {� �Z  Y�  V�  ,G  �9    �� m-  Z�  �  ,G  �9    �� �Z  [�  �  ,G  �9        �Z  \�  U�  ,G  �9     �� �R  ]�  �  ,G  �9    �� �Z      �  ,G  �9    � �  _�  K�  -G  �9    	� �Z  `�  Z�  -G  �9    � t  a�  W�  -G  �9    )� �Z  b�  _�  -G  �9    :� �Z  c�  X�  -G  �9    K� m-  d�  Y�  -G  �9    \� �Z  e�  a�  -G  �9    m� �Z  f�  [�  -G  �9    ~� �R  g�  \�  -G  �9    �� �Z      ]�  -G  �9    ӯ �Z  i�  $�  .G  �9        �Z  j�  !�  .G  �9     � t  k�  `�  .G  �9    � �Z  l�  i�  .G  �9    � o-  m�  "�  .G  �9    � �Z  n�  #�  .G  �9        �Z  o�  h�  .G  �9     &� �Z  p�  %�  .G  �9    7� �Z      &�  .G  �9    {� �  r�  ^�  /G  �9    �� �Z  s�  m�  /G  �9    �� t  t�  j�  /G  �9    �� �Z  u�  r�  /G  �9    �� �Z  v�  k�  /G  �9    ð o-  w�  l�  /G  �9    ԰ �Z  x�  t�  /G  �9    � �Z  y�  n�  /G  �9    �� �Z  z�  o�  /G  �9    � �Z      p�  /G  �9    K� �Z  |�  7�  0G  �9        �Z  }�  4�  0G  �9     \� t  ~�  s�  0G  �9    k� �Z  �  |�  0G  �9    |� q-  ��  5�  0G  �9    �� �Z  ��  6�  0G  �9        �Z  ��  {�  0G  �9     �� �Z  ��  8�  0G  �9    �� �Z      9�  0G  �9    � �  ��  q�  1G  �9    �� �Z  ��  ��  1G  �9    
� t  ��  }�  1G  �9    � �Z  ��  ��  1G  �9    *� �Z  ��  ~�  1G  �9    ;� q-  ��  �  1G  �9    L� �Z  ��  ��  1G  �9    ]� �Z  ��  ��  1G  �9    n� �Z  ��  ��  1G  �9    � �Z      ��  1G  �9    ò �Z  ��  I�  2G  �9        �Z  ��  F�  2G  �9     Բ t  ��  ��  2G  �9    � �Z  ��  ��  2G  �9    �� �Z  ��  G�  2G  �9    � �Z  ��  H�  2G  �9        �Z  ��  ��  2G  �9     � �Z  ��  J�  2G  �9    '� �Z      K�  2G  �9    k� �  ��  ��  3G  �9    q� �Z  ��  ��  3G  �9    �� t  ��  ��  3G  �9    �� �Z  ��  ��  3G  �9    �� �Z  ��  ��  3G  �9    �� �Z  ��  ��  3G  �9    ĳ �Z  ��  ��  3G  �9    ճ �Z  ��  ��  3G  �9    � �Z  ��  ��  3G  �9    �� �Z      ��  3G  �9    ;� �Z  ��  \�  4G  �9        �Z  ��  Y�  4G  �9     L� t  ��  ��  4G  �9    [� �Z  ��  ��  4G  �9    l� s-  ��  Z�  4G  �9    }� �Z  ��  [�  4G  �9        �Z  ��  ��  4G  �9     �� �Z  ��  ]�  4G  �9    �� �Z      ^�  4G  �9    � �  ��  ��  5G  �9    � �Z  ��  ��  5G  �9    �� t  ��  ��  5G  �9    	� �Z  ��  ��  5G  �9    � �Z  ��  ��  5G  �9    +� s-  ��  ��  5G  �9    <� �Z  ��  ��  5G  �9    M� �Z  ��  ��  5G  �9    ^� �Z  ��  ��  5G  �9    o� �Z      ��  5G  �9    �� �Z  ��  n�  6G  �9        �Z  ��  k�  6G  �9     ĵ t  ��  ��  6G  �9    ӵ �Z  ��  ��  6G  �9    � �Z  ��  l�  6G  �9    �� �Z  ��  m�  6G  �9        �Z  ��  ��  6G  �9     � �Z  ��  o�  6G  �9    � �Z      p�  6G  �9    [� �  ��  ��  7G  �9    a� �Z  ��  ��  7G  �9    r� t  ��  ��  7G  �9    �� �Z  ��  ��  7G   :    �� �Z  º  ��  7G  :    �� �Z  ú  ��  7G  :    �� �Z  ĺ  ��  7G  :    Ŷ �Z  ź  ��  7G  :    ֶ �Z  ƺ  ��  7G  :    � �Z      ��  7G  :    +� �Z  Ⱥ  ��  8G  :    <� �Z  ɺ  ~�  8G  :    M� t  ʺ  ��  8G  	:    \� �Z  ˺  }�  8G  
:    m� �Z  ̺  Ⱥ  8G  :    ~� �Z  ͺ  �  8G  :        �Z  κ  Ǻ  8G  :     �� �Z  Ϻ  ��  8G  :    �� �Z      ��  8G  :    � �  Ѻ  ��  9G  :    � �Z  Һ  ̺  9G  :        �Z  Ӻ  ˺  9G  :     �� t  Ժ  ɺ  9G  :    
� �Z  պ  Ѻ  9G  :    � �Z  ֺ  ʺ  9G  :    ,� �Z  ׺  Һ  9G  :    =� �Z  غ  Ժ  9G  :    N� �Z  ٺ  ͺ  9G  :    _� �Z  ں  κ  9G  :    p� �Z      Ϻ  9G  :    �� �Z  ܺ  ��  :G  :        �Z  ݺ  ��  :G  :     Ÿ t  ޺  Ӻ  :G  :    Ը �Z  ߺ  ܺ  :G  :    � u-  �  ��  :G  :    �� �Z  �  ��  :G   :        �Z  �  ۺ  :G  !:     � �R  �  ��  :G  ":    � �Z      ��  :G  #:    \� �  �  к  ;G  $:    b� �Z  �  �  ;G  %:    s� t  �  ݺ  ;G  &:    �� �Z  �  �  ;G  ':    �� �Z  �  ޺  ;G  (:    �� u-  �  ߺ  ;G  ):    �� �Z  �  �  ;G  *:    ƹ �Z  �  �  ;G  +:    ׹ �R  ��  �  ;G  ,:    � �Z      �  ;G  -:    ,� �Z  �  ��  <G  .:        �Z  �  ��  <G  /:     =� t  �  �  <G  0:    L� �Z  �  �  <G  1:    ]� w-  �  ��  <G  2:    n� �Z  ��  ��  <G  3:        �Z  ��  �  <G  4:     � �Z  ��  ��  <G  5:    �� �Z      ��  <G  6:    Ժ �  ��  �  =G  7:    ں �Z  ��  �  =G  8:    � t  ��  �  =G  9:    �� �Z  ��  ��  =G  ::    � �Z  ��  �  =G  ;:    � w-  ��  �  =G  <:    -� �Z  ��  ��  =G  =:    >� �Z  ��  ��  =G  >:    O� �Z   �  ��  =G  ?:    `� �Z      ��  =G  @:    �� �Z  �  ��  >G  A:        �Z  �  ��  >G  B:     �� t  �  ��  >G  C:    Ļ �Z  �  �  >G  D:    ջ �Z  �  ��  >G  E:    � �Z  �  ��  >G  F:        �Z  �  �  >G  G:     �� �Z  	�  ��  >G  H:    � �Z      ��  >G  I:    L� �  �  ��  ?G  J:    R� �Z  �  �  ?G  K:    c� t  �  �  ?G  L:    r� �Z  �  �  ?G  M:    �� �Z  �  �  ?G  N:    �� �Z  �  �  ?G  O:    �� �Z  �  �  ?G  P:    �� �Z  �  �  ?G  Q:    Ǽ �Z  �  �  ?G  R:    ؼ �Z      	�  ?G  S:    � �Z  �  ˬ  @G  T:        �Z  �  Ȭ  @G  U:     -� t  �  �  @G  V:    <� �Z  �  �  @G  W:    M� y-  �  ɬ  @G  X:    ^� �Z  �  ʬ  @G  Y:        �Z  �  �  @G  Z:     o� �Z  �  ̬  @G  [:    �� �Z      ͬ  @G  \:    Ľ �  �  
�  AG  ]:    ʽ �Z  �  �  AG  ^:    ۽ t   �  �  AG  _:    � �Z  !�  �  AG  `:    �� �Z  "�  �  AG  a:    � y-  #�  �  AG  b:    � �Z  $�   �  AG  c:    .� �Z  %�  �  AG  d:    ?� �Z  &�  �  AG  e:    P� �Z      �  AG  f:    �� �Z  (�  ެ  BG  g:        �Z  )�  ۬  BG  h:     �� t  *�  �  BG  i:    �� �Z  +�  (�  BG  j:    ž {-  ,�  ܬ  BG  k:    ־ �Z  -�  ݬ  BG  l:        �Z  .�  '�  BG  m:     � �R  /�  ߬  BG  n:    �� �Z      �  BG  o:    <� �  1�  �  CG  p:    B� �Z  2�  ,�  CG  q:    S� t  3�  )�  CG  r:    b� �Z  4�  1�  CG  s:    s� �Z  5�  *�  CG  t:    �� {-  6�  +�  CG  u:    �� �Z  7�  3�  CG  v:    �� �Z  8�  -�  CG  w:    �� �R  9�  .�  CG  x:    ȿ �Z      /�  CG  y:    � �Z  ;�  �  DG  z:        �Z  <�  �  DG  {:     � t  =�  2�  DG  |:    ,� �Z  >�  ;�  DG  }:    =� }-  ?�  �  DG  ~:    N� �Z  @�  �  DG  :        �Z  A�  :�  DG  �:     _� �R  B�  �  DG  �:    p� �Z      �  DG  �:    �� �  D�  0�  EG  �:    �� �Z  E�  ?�  EG  �:    �� t  F�  <�  EG  �:    �� �Z  G�  D�  EG  �:    �� �Z  H�  =�  EG  �:    �� }-  I�  >�  EG  �:    � �Z  J�  F�  EG  �:    � �Z  K�  @�  EG  �:    /� �R  L�  A�  EG  �:    @� �Z      B�  EG  �:    ��  [  N�  �  FG  �:        �Z  O�   �  FG  �:     �� t  P�  E�  FG  �:    �� �Z  Q�  N�  FG  �:    �� �Z  R�  �  FG  �:    �� �Z  S�  �  FG  �:         [  T�  M�  FG  �:     �� [  U�  �  FG  �:    �� [      �  FG  �:    ,� �  W�  C�  GG  �:    2� �Z  X�  R�  GG  �:    C� t  Y�  O�  GG  �:    R� �Z  Z�  W�  GG  �:    c� �Z  [�  P�  GG  �:    t� �Z  \�  Q�  GG  �:    �� �Z  ]�  Y�  GG  �:    ��  [  ^�  S�  GG  �:    �� [  _�  T�  GG  �:    �� [      U�  GG  �:    �� [  a�  �  HG  �:        [  b�  �  HG  �:     � t  c�  X�  HG  �:    � [  d�  a�  HG  �:    -� -  e�  �  HG  �:    >� [  f�  �  HG  �:        [  g�  `�  HG  �:     O� �R  h�  �  HG  �:    `� [      �  HG  �:    �� �  j�  V�  IG  �:    �� [  k�  e�  IG  �:    �� t  l�  b�  IG  �:    �� [  m�  j�  IG  �:    �� [  n�  c�  IG         �  �= ��  ��  �i     ��" �4  �= �= ��  �i    ��" x@          ��  �i    ��" �4  �= �^  ��  �i    ��" �  �= Y< ��  �i    ��" k  �= �= ��  �i    ��" �@  �= �& ��  �i    ��" �  �= [< ��  �i    �" [  �= = ��  �i    	�" t  �= = ��  �i    �" �  �= �< ��  �i    �" n  �= �= ��  �i    �" �  �= `< ��  �i    $�" �  �= �; ��  �i    /�" �  �= E ��  �i    7�" �.  �= =�  ��  �i    =�" �  �= J2 ��  �i        ]  �= ; ��  �i         �  �= L2 ��  �i     C�" �5  �= G ��  �i        o  �= �' ��  �i     N�" p  �= ; ��  �i        �#  �= �; ��  �i         ]  �= �= ��  �i         �#  �? �|  ��  �i                 libgmpxx4  0066a3c29cda07ddd72dc17f19d92017 libgnome-bluetooth-dev 3.2.2-0ubuntu5 3.2.2-0ubuntu5 3.2.2-0ubuntu5 libgnome-bluetooth8-dev  d4a23fcbf8644791fc9f3efc1e86671d 3.2.2-0ubuntu5 2.3.6-6~ 0.88 2.26.0 3.0.0  db93bef1e8554f50b96803fc7eb52b75 libgnome-control-center-dev 1:3.4.1-0ubuntu1 1:3.4.1-0ubuntu1  d94b8cc23eade4594fdcf9cbed49b9fd 1:3.4.1-0ubuntu1 2.3.6-6~ 2.29.14 3.0.0 1.14.0  d35b85c0b8b73f7bf4cf19c7aa215660 libgnome-desktop-2-17 1:2.32.1-0ubuntu9 2.4 1.2.4 2.31.1 2.22.0 2.31.2 2.24.0 0.4 2:1.2.99.3 0.227-1  9612c39f0e5a5b66bbc4c91706766770 3.4.1-0ubuntu1 2.8 1.2.4 2.22.0 2.31.8 3.3.6 2:1.2.99.3 2.91.92 3.4.1-0ubuntu1 0.227-1  9612c39f0e5a5b66bbc4c91706766770 3.4.1-0ubuntu1 3.4.1-0ubuntu1 3.4.1-0ubuntu1 3.0.0  56a8ba33b1e9ed69ca462c02df34810e libgnome-desktop-dev 1:2.32.1-0ubuntu9 1:2.32.1-0ubuntu9 2.14.0 0.5 libpanel-applet2-dev 1.5.4-1  56a8ba33b1e9ed69ca462c02df34810e libgnome-keyring-common 3.2.2-2 3.2.0-4 3.2.0-4  a99a0b0c07fa51601e613d5f4c2ff6bf 3.2.2-2 3.2.2-2 3.2.2-2 2.16  06811260d9185f752b2b103b554445c9 3.2.2-2 2.3.6-6~ 1.1.1 1.4.5 2.31.2 3.2.2-2 3.0  f150a94bdcf9084181d7bf821cee44e9 libgnome-keyring0-dbg 3.2.2-2 3.2.2-2  9adb41e9aa1b463b9d6adb692fe855ab 3.0.0-1 2.3.6-6~ 2.31.1 2.27 0.10.23 3.0.0 2.28.1-2  b782ad1e0d2f4600bd5dad99f0f0da2b libgnome-media-profiles-dev 3.0.0-1 3.0.0-1 2.27 3.0.0  ef3fe2c8581a9375add5d01903cff698 3.4.0-0ubuntu1 2.4 2.30.0  c6885fb9ed6a22440597626b04ff66f5 libgnome-menu-3-dev 3.4.0-0ubuntu1 3.4.0-0ubuntu1 3.4.0-0ubuntu1 2.15.2 0.6.5-6  afd73c86a97aafa140ad96e55a77e8f7 libgnome-menu-dev 3.0.1-0ubuntu7 libgnome-menu2 3.0.1-0ubuntu7 2.15.2 0.6.5-6  afd73c86a97aafa140ad96e55a77e8f7 3.0.1-0ubuntu7 2.4 2.24.0  c6885fb9ed6a22440597626b04ff66f5 2.24.2-1 0.5.1 2.12.10-1ubuntu1 1:2.17.90 2.10.1 libgnome-vfs2.24-cil 2.10.0-1 2.16.0-4  12c2df85a884a0b47b38950078f94601 libgnome-vfs2.0-cil-dev 2.24.2-1 2.24.2-1 2.24.1-5  f4c6545bd564cea43ef56c0b7e0d36c7 2.32.1-2ubuntu1 2.15.0 2.4 0.2 2.31.1 2.24.0 1:2.17.90 1:2.14.10 1.16 libgnome2-common 2.32 2.33  97cf103f7a4db485fa237d4d1267d5af 2.32.1-2ubuntu1 2.28.1-2 0.3.16 2.28  ba1f1700e3ae67d6d4fcf81148b9503e libgnome2-dbg 2.32.1-2ubuntu1 2.32.1-2ubuntu1  3b76765629e0dcb7d40522c9f6df0465 2.32.1-2ubuntu1 2.32.1-2ubuntu1 libgnomevfs2-dev libgnome2-doc  4ae3cc6272ad8d25682d5eae91fd71ab 2.32.1-2ubuntu1  3598ba27d8b1d9488e310498a70e31f6 libgnome2.0-cil-dev 2.24.2-1 2.24.2-1 2.24.2-1 2.24.2-1 2.24.1-5  5a50dbc1145299a604d294e871395cce 2.24.2-1 2.24.2-1 2.24.2-1 2.24.2-1 0.5.1 2.12.10-1ubuntu1 2.29.10 2.12.10-1ubuntu1 2.17.3 2.11.1 2.22.0 2.23.90 2.12.10-1ubuntu1 2.10.1 2.3.6-6~ 2.10.0-1 2.16.1  2261446b092e871d9e6c2b254be790ee 2.30.3-1ubuntu1 2.3.18 1.12.4 2.4 1.18.0 2.22.0 1:2.6.1 2.24.0 2.8.17 1.14.0 libgnomecanvas2-common 2.30 2.31  c2991c3ab3a90b3887e2afdd8cf49121 2.30.3-1ubuntu1  cccfbd722cc06a1517ee663b1c9e3c13 libgnomecanvas2-dbg 2.30.3-1ubuntu1 2.30.3-1ubuntu1  9d15b98f1afeb86b49ebaabaea2d02af 2.30.3-1ubuntu1 2.30.3-1ubuntu1 2.3.16 2.8.17 1.9.0 libgnomecanvas2-doc  882668dc99aed65213a3671b39452e66 2.30.3-1ubuntu1  83c9ac6e16e2d71b826d912f8a1aeddc libgnomekbd-common 3.4.0.2-1 2.91.2-1 2.91.2-1  5975fb27dd14bb43c79c9935c681f328 libgnomekbd-dev 3.4.0.2-1 3.4.0.2-1 3.4.0.2-1 2.26 3.0.0 libxklavier-dev 5.2  353cd231a62082c6784b7cd9c5727a8c 3.4.0.2-1 2.7 1.2.4 2.22.0 2.26.0 3.0.0 1.22.0 5.0 3.4.0.2-1  af3a5d9e866a2d8042968d3f6510a8a8 2.24.5-2ubuntu2 2.3.18 1.12.4 2.15.1 2.7 2.31.1 2.22.0 1:2.6.1 2.31.8 2.20.3 2.17.3 2.11.1 1:2.17.90 2.14 1:1.0.0 1.17.5 libgnomeui-common 2.24 2.25  cb811d94f3ad018439e5b2b11c176655 libgnomeui-0-dbg 2.24.5-2ubuntu2 2.24.5-2ubuntu2  7a2d66362f4935c495f930f8e2838deb 2.24.5-2ubuntu2  1ceb3c761cd65eec041926edeb269d20 libgnomeui-dev 2.24.5-2ubuntu2 2.24.5-2ubuntu2 2.13.7 2.12.0 2.6.0 0.4 2.6.0 2.13.1 2.8.4-2 1.1.2 2.16.0 libgnomeui-doc  9fa85ad2ad07b12c48c9678c64f3cd00 2.24.5-2ubuntu2  656a2ead275e05111edae9a931de3276 1:2.24.4-1ubuntu2 2.2.51-3 0.6.16 0.6.16 0.6.16 2.4 1.0.2 0.78 2.31.1 2.24.0 2.12.6.1-0 1.32 2.7.4 1:1.1.4 0.90 1:2.24 1:2.25 libgnomevfs2-bin gamin fam 2.15.0 2.12.2-4  fe613be0e6a5d18afcbb8b9e615566c7 libgnomevfs2-0-dbg 1:2.24.4-1ubuntu2 1:2.24.4-1ubuntu2  33f7f857d4dff5f6f47d9e36d735a8a1 1:2.24.4-1ubuntu2 2.28.1-2 2.10.0 2.12.2-4 1:2.16.3-6  f5eddba2d9a18e1fb027a583e5aa5c69 1:2.24.4-1ubuntu2 1:2.24.4-1ubuntu2 2.8.0-1 0.6 0.6  98e964831c248a766a1a7af8d13d131a 1:2.24.4-1ubuntu2 2.4 2.31.1 2.16.0 1:2.17.90 1.7+dfsg 3.0.24 2.7.4 1:2.24 1:2.25 1:2.16.0-1 2.12.2-7  cd20afe8f22aedf41c6d52162891c7a1 libgnuinet-java 1.1.2-2  7723ac8ef97820b080e1df88310c3ebc 1.1.1-7  c956f757ad92c25fe5210761c670e730 libgnujaf-java-doc 1.1.1-7  33b00ecc0aee1046d19b7ed8cf5d2645 1.1.2-6 libgnumail-java-doc  628efd4791d60c5ff5e5c721f8465df4 1.1.2-6  ff58e470c4b1c0fdbcb2043bf938cc05 2.12.14-5ubuntu3 2.12.14-5ubuntu3 libgnutlsxx27 2.12.14-5ubuntu3 libgnutls-openssl27 2.12.14-5ubuntu3 1.4.0 0.3.4 0.4 gnutls-dev  e2a3e8bac6f6874ae5a4bc8e489881a6 2.12.14-5ubuntu3 2.12.14-5ubuntu3 2.4 libtasn1-3 1.6-0  ed7bc845df883f3776627eaef9179481 2.12.14-5ubuntu3 2.8 1.4.5 0.11 1.6-0 1:1.1.4 gnutls0 gnutls0.4 ccbuild 2.0.1-1 csync2 1.34-2.2 freewheeling 0.6-1.1 gkrellm 2.3.4-1 2.31.2-1 2.30.1-1 macopix-gtk2 1.7.4-3 pokerth 0.8.3-3+b1 pokerth-server 0.8.3-3+b1 sipsak 0.9.6-2.1 slrn 1.0.0~pre18-1.1 slrnpull 1.0.0~pre18-1.1 snowdrop 0.02b-9 2.64-4 tf5 5.0beta8-4 wput 0.6.2-2 zoneminder 1.24.4-1 gnutls3  07e0914117156d2b3fcf0d63e9ef8ac2 libgnutls26-dbg 2.12.14-5ubuntu3 2.12.14-5ubuntu3 libgnutls13-dbg libgnutls28-dbg  49ef95a26f6727eeaa8d2c979d728b2d 2.12.14-5ubuntu3 2.12.14-5ubuntu3 2.1.3 1:4.1.1 4.1.1  afe5e834531764319ee8050592126f1d 3.4.0-0ubuntu1 2.4 2.31.4 2.22.2 3.0.0 0.12.0 1.14.0 0.7 2.27.4 2.32.2 1.3.10 libgoa-1.0-common 3.4.0-0ubuntu1  552490d3e14a107decec4ee36ed111f2 3.4.0-0ubuntu1  2842d00135dfd07a49e67517e0da8c5e libgoa-1.0-dev 3.4.0-0ubuntu1 3.4.0-0ubuntu1 3.4.0-0ubuntu1 libgoa-1.0-doc  9bea771687b36e66a35d8eb109b74a84 3.4.0-0ubuntu1  6e6a90b593144637e1e2aadec6654557 4.6.3-1ubuntu5 4.6.3-1ubuntu5 2.6 4.3.6-1 4.4.6-4 4.5.3-2  9651123458dd1bf3c162dfb6a6292ff4 4.6.3-1ubuntu5 4.6.3-1ubuntu5 4.6.3-1ubuntu5  7e2cdd49ce630cb7e2347d7fe5ca5677 libgoocanvas-common 0.15-1  81e79d2356bd92c34959394125934bca libgoocanvas-dev 0.15-1 libgoocanvas3 0.15-1  aff1a4a099453e8b203ad89501ba0f41 0.15-1 1.29.3 2.4 1.4.10 2.8.0 2.2.1 2.24.0 2.12.0 1.14.0 1:1.1.4 0.15-1  5f76f1e224aac78609cc544df9823401 1.10-2ubuntu1 1.10-2ubuntu1 2.3.4  e9d7dd73a021cc106c5f4c856319e138 1.10-2ubuntu1 2.1.3  69f556e12b915238b7c815f26da80be5 4:4.8.2-0ubuntu2 2.4 1:4.1.1 1.10 libgpgme11 1.2.0 4.2.1 4:4.4.85 4:4.4.85  5475327e9546347943c2057167f7b015 1.2.0-1.4ubuntu2 2.15 1.10 2.0.7 1.4.6-2 2.0.4 1.9.6  e5f3df1fe0181a93b9605f156f5092a1 1.2.0-1.4ubuntu2 1.2.0-1.4ubuntu2 libpth-dev libgpgme-dev libgpgme10-dev  ebed5b97e9a7952c23ddaba333c045fe 2.4.13-1ubuntu1 2.15 2.0.36~rc1~dfsg 2.4.10.1 8c 2.4.2 1.15.7.2 gphoto2 2.1.1 0.175 libgphoto2-l10n 2.4.13-1ubuntu1 2.1.1  0667f79ceb3d5a999a0ff55ad225e156 libgphoto2-2-dev 2.4.13-1ubuntu1 2.4.13-1ubuntu1  09f6d0ae3f118a398b90fb84845618e0 libgphoto2-dev-doc 2.4.13-1ubuntu1  80bdc5b1f735d5956b63d68eeabdaa75 2.4.13-1ubuntu1 2.4.10.1-4 2.4.10.1-4  ab44a2500d46c48e4f7f5c712df346d2 2.4.13-1ubuntu1 2.15 2.4.2 2:0.1.12 2.1.0 gtkam libgphoto2port 2.1.1  6e52236fade1dd1f9b033de909479e66 libgpm-dev 1.20.4-4 1.20.4-4 libgpmg1-dev 1.20.4 1.20.4  9c6c4769bf624eea9163234b6f001a86 1.20.4-4 2.7 gpm  e77c023597910bf799fb8eb6602823ce 1.20.4-4 oldlibs  f2b5559b9a40c72cacb2f5a0dc81da62 libgpod-cil 0.8.2-4 2.12.10-1ubuntu1 0.7.94 2.12.10-1ubuntu1 2.10.1 libmono-system-core4.0-cil 2.10.3  131f461c9278ab268320d20d8b94825b libgpod-cil-dev 0.8.2-4 0.8.2-4  7afe1fd9e9aa601e2f65edf80b266775 libgpod-common 0.8.2-4 2.4 2.16.0 0.7.90 0.7.90 0.9.7 0.16 libsgutils2-2 1.27 2:1.0.8 2.7.4 libgpod0 0.3.0-4  0eae2c1963cba37ea794f90b5823ca74 libgpod-dev 0.8.2-4 0.8.2-4 libimobiledevice-dev libgpod-doc libgpod-nogtk-dev  344168e89c989d05df365c2e722e3f86 0.8.2-4 0.6.0-6 0.3.0-4  c1d9226f5190e2340cc4c43db6f32214 0.8.2-4 0.8.2-4  8a148c015966976f4adc89561e46e439 0.8.2-4 2.4 2.22.0 2.24.0 0.9.7 0.16 3.5.9 2.7.4 1:1.2.0  89537791a1486eb992b2f5d253d0289c 0.8.2-4 2.4 2.24.0 0.9.7 0.16 3.5.9 2.7.4 1:1.2.0  25e878c1fe823f8e88a4637884a93ad3 libgps-dev 3.4-2 3.4-2 2.34.dfsg-1  134afa388f50f3672fe1aadaffd3e556 3.4-2 4.91 2.7 1.0.2 4.1.1 2:1.0.9~rc3  dc7f47fc942723b517c23aead9afc361 0.2.0-0ubuntu1 2.1.3 1:4.1.1 4:4.5.3 4:4.7.0~beta1 4.1.1 libgrantlee0 0.1.2-0ubuntu1 0.1.2-0ubuntu1  5b39a85487ef7217f6fcac0eec65abe5 libgrantlee-dev 0.2.0-0ubuntu1 0.2.0-0ubuntu1 0.2.0-0ubuntu1  e07afc1e6e310f775ba8d324d30b04dd 0.2.0-0ubuntu1 2.1.3 1:4.1.1 4:4.7.0~beta1 4:4.5.3 4.1.1 0.1.2-0ubuntu1 0.1.2-0ubuntu1  303fffca2326cf0c9a45a6a6f415afb7 2.26.3-10ubuntu1 2.7  43cc8b0d09d4df1ae1fe7928559991e9 2.26.3-10ubuntu1 2.26.3-10ubuntu1 2.26.3-10ubuntu1 2.26.3-10ubuntu1 2.26.3-10ubuntu1 2.26.3-10ubuntu1 libpathplan4 2.26.3-10ubuntu1 libxdot4 2.26.3-10ubuntu1 2.12-1 libgraphviz3-dev libgraphviz4-dev 2.16-3 2.16-3  c3a8010bf765807229fbc858755d3ad0 libgrip-dev 0.3.4-0ubuntu1 0.3.4-0ubuntu1 2.28.6 3.0.8 libutouch-geis-dev libgrip-0.1-dev 0.2.0-0ubuntu1 0.2.0-0ubuntu1  5ea0a05187e06229ff2dfe57a94f4b46 0.3.4-0ubuntu1 2.3.6-6~ 2.28.6 3.0.8-0ubuntu1 1.0.8 libgrip-0.1-0 0.2.0-0ubuntu1 0.2.0-0ubuntu1  3bdc4b8032af04418dd84b835645718d libgs-dev 9.05~dfsg-0ubuntu4 9.05~dfsg-0ubuntu4 libijs-dev libjasper-dev libjbig2dec0-dev libpaper-dev libtiff4-dev  f4c1713297a6c688a87d0b2876caf1fa 9.05~dfsg-0ubuntu4 2.11 1.4.0 1.4.0 2.8.0 2.2.1 1.13 0.35 libjbig2dec0 0.11-1 8c 2.2+git20110628-2 1.2.13-4 1:1.1.4 libgs9-common 9.05~dfsg-0ubuntu4  77d0d233cd004663a71b1ef44e87d3f1 9.05~dfsg-0ubuntu4 9.01~dfsg-1 9.01~dfsg-1  e05fdddcd813b05d2ad67bea03360fce libgsf-1-114 1.14.21-2 libgsf-1-common 1.14.21-2 2.7 2.24.0 2.7.4 1:1.1.4 gnumeric 1.4.4  c8d66bfdfeca32518166bf37f3562e65 libgsf-1-114-dbg 1.14.21-2 1.14.21-2 2.7 2.24.0 2.7.4 1:1.1.4  8b112e98e2d702125fe8881d8d9fa826 1.14.21-2 libgsf-1 1.12.3-4  63c4e64ca9b6d79b4947e39b148fe3e7 libgsf-1-dev 1.14.21-2 1.14.21-2 2.16.1 2.6.10-1 libgsf-gnome-1-dev 1.14.8-1  cf11e2fd7c0544a47fc11c6d831623f4 libgsf-gnome-1-114 1.14.21-2 2.15.0 2.3.6-6~ 2.16.1 1.14.9 1:2.14.10  55b2afb9f0abd7142dfee5f88be24f26 libgsf-gnome-1-114-dbg 1.14.21-2 1.14.21-2 2.15.0 2.3.6-6~ 2.16.1 1.14.9 1:2.14.10  49c3acd5f48cbf588fb7990523ed5042 1.14.21-2 1.14.21-2  4af7c149cdeb4653e8ae4bdb63c395ac libgsl0-dbg 1.15+dfsg-1build1 1.15+dfsg-1build1  5643f5b8950f7a867c6a8e769d83e918 libgsl0-dev 1.15+dfsg-1build1 1.15+dfsg-1build1 gsl-dev libgsl0 1.9-4  f82bf91c76eb8a810492207c71d95b23 1.15+dfsg-1build1 2.7 gsl-ref-psdoc gsl-doc-pdf gsl-doc-info gsl-ref-html gsl 1.9-4  c18364d1c52158ec186a19bfe690fbf6 1.0.13-3 2.3.4 libgsm-dev  94b20db299809704539155cb9cb42f6d libgsm1-dbg 1.0.13-3 1.0.13-3  90c335890716b559d7c3e2e2a92e8d05 1.0.13-3 1.0.13-3 1.0.10-2  ab1a541c87da5c79fde9395194330ec7 1.10+dfsg~beta1-2 2.7 1.34 1.8+dfsg 1.10+dfsg~beta1-2 libkrb5support0 1.7dfsg~beta2 krb5-user  2dd7fe357b29d0ba6727171c01f0301c 1.6~git20120311.dfsg.1-2 1.4.0+git20110226 2.8 1.01 1.4.0+git20110226 libheimntlm0-heimdal 1.4.0+git20110226 1.4.0+git20110403 1.4.0+git20110226 libgssapi3  af366fc4a421c3a53900cab1af5922e2 0.12.1-2 2.7 2.22.0 2.26.1  1f32e3405a87412ac4a2f1ab29fdc11e libgssdp-1.0-dbg 0.12.1-2 0.12.1-2  bf28d5d39c668581bf6540b27ef584b2 libgssdp-1.0-dev 0.12.1-2 0.12.1-2 libgssdp-doc 0.6.5-5  24d125dcec038893face07f8c878be98 0.12.1-2  e8ae890da00b06f4d32e389d620a1a18 libgssglue-dev 0.3-4 libgssglue1 0.3-4 libgssapi-dev 0.11-1 0.11-1  35720ad4288bc22005305dbcc9ea02a5 0.3-4 2.7 libgssapi2 0.11-1 0.11-1  33d237300a5fcf648297ee929270d1f1 1.10+dfsg~beta1-2 2.15 1.10+dfsg~ libkadm55  f18b3ce27893cc2b96de6c617dc25d94 0.10.36-1 2.7 2.31.2 0.10.36 1:0.4.16 1:1.1.4 libvisual-0.4-plugins gstreamer-codec-install gnome-codec-install 0.10.16-4 totem-gstreamer 2.17.92-0ubuntu1 0.6.5-2  1f83d48f1815b1413bf5322dc753ba59 0.10.36-1 0.10.36-1 0.10.36 0.10.36-1 0.6.5-2  0acc042058e8c9e8d17fbca59836d2a0 0.10.36-1ubuntu1 2.15 2.31.8 2.7.4 0.10.25.2 0.10.11cvs20070110-0ubuntu5 0.6.5-2  f08b5d59945781d0a8d4897e45d5a847 libgstreamer0.10-0-dbg 0.10.36-1ubuntu1 0.10.36-1ubuntu1  eca1cd2ce224cc45fde385a4110da4ae 0.10.36-1ubuntu1 0.10.36-1ubuntu1 2.3.6-6~ 2.24 0.10.36-1ubuntu1 0.6.5-2 0.10.20-2  de1692260510350a48f76ec91eae40a9 3.4.1-0ubuntu1 3.4.1-0ubuntu1 2.2.0 2.7 1.10.0 1.10.0 1.4.0 2.8.0 2.25.2 2.32.0 1.30.0 2:1.4.99.1 1:0.3-1 1.1.2 1:1.1 2:1.2.99.4 2:1.2.99.3                        5  �? ]; ��  �i         �5  �? �  ��  �i         �5  �? 2k  ��  �i         \�  �?     ��  �i     xC# {5  �? �j  ��  �i        \�      �? ��  �i     �C# �  �? = ��  �i        �4  �? �= ��  �i         ^�  �?     ��  �i         ^�      �? ��  �i     D# �  �? �? ��  �i    D# �4  �? �? ��  �i        _�  �?     ��  �i         _�      �? ��  �i         �  �? �; ��  �i        �  �? �; ��  �i         �  �? �? ��  �i         `�  �?     ��  �i         `�      �? ��  �i     �D# �  �? �? ��  �i    �D# �  �? �  ��  �i        �4  �? �? ��  �i     �D# �  �? �= ��  �i    �D# ��  �? �< ��  �i    �D# ��  �? �; ��  �i    �D# 4�  �? V( ��  �i    �D# @�  �? � ��  �i    �D# ?G  �? �; ��  �i    �D# �.  �? )2 ��  �i    E#   �? �' ��  �i    E# ��  �? [ ��  �i    E# �  �? �-  ��  �i        �  �? �-  ��  �i     !E# }  �? �% ��  �i    +E# |  �? � ��  �i    5E# ~  �? �% ��  �i    ?E# 9  �? �= ��  �i        �  �? ��  ��  �i         �  �? �7  ��  �i     FE# �  �? $3 ��  �i        �  �? �= ��  �i         a�  �?     ��  �i         a�      �? ��  �i           �? L< ��  �i         �  �? M< ��  �i         6�  �?     ��  �i         �  �? �7  ��  �i         b�  �?     ��  �i         b�      �? ��  �i     �E# k  �? �= ��  �i    �E# �  �? �= ��  �i    �E# �  �? �= ��  �i    �E# n  �? �= ��  �i    �E# �  �? _< ��  �i    �E# �4  �? �^  ��  �i        �      �= ��  �i     IF# c�          ��  �i    �F# c�  �? �? ��  �i    �F# f�  �?     ��  �i    �F# q�  �? �< ��  �i    �F#  �  �? �; ��  �i    �F# @�      �? ��  �i    G# k  �? �? ��  �i    G# �  �? �? ��  �i    G# �  �? �? ��  �i    !G# n  �? �? ��  �i    (G# �  �? �? ��  �i    .G# �4  �? �? ��  �i        �      �? ��  �i     zG# �4      �^  ��  �i    �G# f�  �? �? ��  �i    �G# �4  �? �? ��  �i    �G# �4  �?     ��  �i        {  �? = ��  �i     �G#  �  �? �? ��  �i     H# @�      �? ��  �i    8H# �  �? �2 ��  �i        �#  �? �2 ��  �i     AH# �  �? �= ��  �i    HH# k  �? �? ��  �i    LH# �  �? �? ��  �i    RH# �  �? �? ��  �i    YH# n  �? �? ��  �i    `H# �  �? �? ��  �i    gH# �  �? �= ��  �i    nH# ��  �?     ��  �i        5�  �?     ��  �i     �H# i�  �?     ��  �i        �#  �? �= ��  �i         j�  �?     ��   j         �#      �= ��  j         �      �/    j         �4  �? �^  Ç  j      I# �  �? �? Ç  j    I# k  �? �? Ç  j    I# �  �? �? Ç  j    I# [  �? �= Ç  j    I# t  �? �= Ç  j    !I# �  �? �? Ç  	j    (I# n  �? �? Ç  
j    /I# �  �? �? Ç  j    6I# �  �? �? Ç  j    AI# �  �? �= Ç  j    II# �.  �? �= Ç  j    OI# �  �? �= Ç  j        ]  �? �= Ç  j         �  �? �= Ç  j         �5  �? �= Ç  j         o  �? �= Ç  j     UI# p  �? �= Ç  j        �  �? �( Ç  j         �#  �? �? Ç  j         ]  �? �= Ç  j         �#  �? �? Ç  j         5   @ �? Ç  j     ????????$?????$????$????$??$$????$$$$$$$$??$$?$$$???$$$$?88?$$$????$$$$?$$$$?$$$$????????$$$$????$?$??? �?$$$$$$$? $$$��  ?� $?????????$$$?$$$$$$$$$?$$$�$?� ????????????????????$$?$?$$??????????$?$$$$$?$?$$???$???????$$$ $$?$??????????$$? $?$$$$$$$$$? �?????$ $?????? ?$$$?$??$????$????? ???�$$$$$???$$$$$?$?$$$$$??$$?$$$$$$$$$$?$$$$$$?$$$$?$$$$$$$$$$$???$$$�??????�$�$�$�$???$$$$$$???$�?$$$$????$????????$$$$?$$$$?$$?$$$?$?$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$??$$$$?$$$?$??????$$$?$$$$$$$$?$$$$$$$$$$$$$$$$$$$$?$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$????$$$$?$$$$$$$?��� $????????????????????$$$??? $????$????$? $$???????$?$???$????????????$$?????$$$$$$$$$$$$$$$$$$$??????$??????????$????$????????????$$$??$$$$$???????$ ?????????$??????????????????????$? ??????????????????????????$$$$$?$$$��  � � � � $$ ?$$$?$?$?????$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$?$$?$???$$??$?$�$$???$????????????????????$????$???????$$??$????$$$$$$$$????????$$?????????????????????$?$$????????$??$?$??????$?????$$???????????$$??$?$$?????????$$$$$???$??$$$$$$$$$$$$$$$$$$$$$$$$?$$$$$$$$$$$$$$$?$$$$$$$$$$$$?$$$$$$$$$$$$$$$$$$$$$$$$$?$$$$$$$$$?$$$$$$$$$$$?$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$?$$$$$$?$$$$?$$$$$$$?$?$$$$��  ?�$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$?$$$$$$$$$$$$$$$$??????????$??$$$$$?$??????$$$$$$$$$$???$?? $ $ ?<?$????$?????<<?$?? ?� ???????$$$???$$???$?$??$????$�?$?? $?? ?????$$$$$$$$$$$$$?$$$$$??????????$???????$$????????????$ ???�????????????????$??????????$$$?$????$$??$����??$$$$$$$$$$� $?$$$$$� ????$$$$$$$$$$$� $$$$� ?$$$$� ?$$$$$$$$$$$� ??$$$$$??$????$?$$$� $??$????$?$$$$$� $$$� $$$� $$$?� ?$$$$$� ????$$ $$$� $$$$� ??????$?$$$$$?$$$$$$$$� $$$� $$$$$� ?$$$� $$$� ???$???$$$$$$$$$� $$??$$$$$$?????$$$$$$$$$?????????$???????????$$$??$$$????$$$$$??$??$?$$?????????$$$?$? ?????$$$$$$$$$$$$$?$$$ $?$$??????$??$$??$?$???$$$$$$$??$?$$?????$???$?$????�$???$??$?????$?$� ??$$????$$$$???$$???$$$???????$??$$$$$$????8<??????$????��$???$???$$$????$?$???? ??� ????? ???� ???�????????�???� ????????� ????????$?$???????$$??????????$�$??$?????$$$$ $$$$?????$$???$$$????$?$$$$??$?$�?$$$$$?$$?? �?� ??�$?$?????????$?$$???????$??$$?????$???????$?? $?$??????$????$????$$$$ ?$$$ � ??????????$??�???$$???$$??<$???$$$$???$??$$???$?$$??$???$????$???$$$$$?$$?$$$??$$$?<$$   $$$$   ?$?$$$$??????$????$$?????$????????$?$???????????? $????$?$�� $$$$$$$????????  ???????????????????$??$?$$$$  $ $�?$$�?$$$$$?$�???$$$$?????$$$$$$$����$? ??$           ?$????$$$$$$$$ $             ? ? ? ? ? ? ? ?  ?? ?$ ? ? ?? ?? ?? ?$ ? ? ? ?$ ? ?  ?  ?? $?$ $?$ ?$ ? ? ? ? ? ? ?             ???????????????????????? $?$$?????????????$$$$????$$??$$???�  ???� ?$??$???????????� ????????????????8?????$$$$$$$$$$$$?$??$$??????$??$$$$$??????$??????$$$$??????$$$$??$$�� $??$$$???$?$?$??????$$ ??????????????$$?????????$??8??$  ?$$$$$$$?$??????????$$??????$??$?$??????$$?$$?$$$$$???$$????$$$$$ ??$??$$$ ?$$ $??????$$?$$$$$$$�$????$?�$???$?????????????$$$?????????$??$?$??????$???$?????$ ???$$???$$?????$???$?$???$???$???$?$??$$??$????$?$????$?$???$???$???$?????$???$$??$?$ ???$???$???$???$???$$???$� ???$???$$???$?$??$??$$$$?<$??$$$$�$?$$?$$$$$$$$$$$$$$$$$????$????????$$$$$$?????$???$$???$ $$?$?$???$$?????????$�$$$$?????$$$$$$$$$�?????  ��??????$$$$$?$????????????$????$$$$?$???$???????????????$ ??????$$?????$??$$$$$   ?$$$??????????????$$$$$$??$$$$� ??$$$$$$$$?$$$�  $?$ ??$???$$$??????$???$$$???$$$$ $??$?$$   ???????$????????$$$?$$$   ???????????$?????$$$$???$$?$??$$$$$$$  ??????$??$$$$�$$$ $$$$$$$$$$??$$$ $$$$$?$$$$$??????????????????????????$???$???????????$$??$???$?????$???????$??$?$$?$$???$??????????????$?$$   ?????�����   � ?$�  ?? � ?$�  ?$?$$� ????   � ??????????? �  $$$$$$$$$$?????????????? ��   ?$?$$� ???$$?$$$$$$$$$$$$$$$$$????�$$$$$$$$$$$$??$$$?????$$$$?$?$?$$?$$$$???????$???$??????$$$???$$???????????????$$? ??<?<????????$??$$?$?$$$?$?????$  ?��  �    ???????<?<?<$??$?????$??$?????????????$????????<??$???$?????<?????$?$$$?????? $$ ?$$ ???$ ?????$�  ??$$??$? ????$ ?$?????�??$?$$???$$$$����$$$?????????????$$???????$??$?�?????$$?$??$??????????$????$$??$$$$?$$$????????$$$$?8?????$$$$$$$$$??ull-featured office productivity suite that provides
 a near drop-in replacement for Microsoft(R) Office.
 .
 This package contains the "tango" symbol style, default style
 for GTK+/Gnome.
Homepage: http://www.libreoffice.org
Original-Maintainer: Debian LibreOffice Maintainers <debian-openoffice@lists.debian.org>

Package: libdpkg-perl
Status: install ok installed
Multi-Arch: foreign
Priority: optional
Section: perl
Installed-Size: 1264
Origin: debian
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Bugs: debbugs://bugs.debian.org
Architecture: all
Source: dpkg
Version: 1.16.1.2ubuntu7
Replaces: dpkg (<< 1.15.8), dpkg-dev (<< 1.15.6)
Depends: dpkg (>= 1.15.8), perl, libtimedate-perl
Recommends: bzip2, xz-utils
Suggests: debian-keyring, gnupg, gpgv, binutils, patch
Breaks: dpkg-dev (<< 1.15.6)
Description: Dpkg perl modules
 This package provides the perl modules used by the scripts
 in dpkg-dev. They cover a wide range of functionalities. Among them
 there are the following modules:
 .
  - Dpkg::Arch: manipulate Debian architecture information
  - Dpkg::BuildOptions: parse and manipulate DEB_BUILD_OPTIONS
  - Dpkg::Changelog: parse Debian changelogs
  - Dpkg::Checksums: generate and parse checksums
  - Dpkg::Compression::Process: wrapper around compression tools
  - Dpkg::Compression::FileHandle: transparently (de)compress files
  - Dpkg::Control: parse and manipulate Debian control information
    (.dsc, .changes, Packages/Sources entries, etc.)
  - Dpkg::Deps: parse and manipulate dependencies
  - Dpkg::ErrorHandling: common error functions
  - Dpkg::Index: collections of Dpkg::Control (Packages/Sources files for
    example)
  - Dpkg::IPC: spawn sub-processes and feed/retrieve data
  - Dpkg::Substvars: substitute variables in strings
  - Dpkg::Vendor: identify current distribution vendor
  - Dpkg::Version: parse and manipulate Debian package versions
 .
 All the packages listed in Suggests or Recommends are used by some of the
 modules.
Homepage: http://wiki.debian.org/Teams/Dpkg
Original-Maintainer: Dpkg Developers <debian-dpkg@lists.debian.org>

Package: x11-session-utils
Status: install ok installed
Priority: optional
Section: x11
Installed-Size: 233
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Version: 7.6+2
Depends: libc6 (>= 2.7), libice6 (>= 1:1.0.0), libsm6, libx11-6, libxaw7, libxmuu1, libxt6, cpp
Conffiles:
 /etc/X11/app-defaults/XSm 34f161c4cba12ff40099e12b40e511d3
Description: X session utilities
 This package provides the X session manager and related tools:
  - rstart;
  - smproxy, a session manager proxy for X clients that do not use the X
    session manager protocol;
  - xsm, a session manager for X sessions;
 Installation of an rsh or ssh daemon (server) is necessary if rstartd is
 to be used, and installation of an rsh or ssh client is necessary if
 rstart is to be used.
Original-Maintainer: Debian X Strike Force <debian-x@lists.debian.org>

Package: libdconf-dbus-1-0
Status: install ok installed
Multi-Arch: same
Priority: optional
Section: libs
Installed-Size: 73
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: d-conf
Version: 0.12.0-0ubuntu1.1
Depends: libc6 (>= 2.4), libdbus-1-3 (>= 1.0.2), libglib2.0-0 (>= 2.31.8), libdconf0 (= 0.12.0-0ubuntu1.1)
Pre-Depends: multiarch-support
Description: simple configuration storage system - D-Bus library
 DConf is a low-level key/value database designed for storing desktop
 environment settings.
 .
 This package contains a D-Bus convenience library.
Homepage: http://live.gnome.org/dconf
Original-Maintainer: Debian GNOME Maintainers <pkg-gnome-maintainers@lists.alioth.debian.org>

Package: libcolamd2.7.1
Status: install ok installed
Priority: optional
Section: libs
Installed-Size: 88
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: suitesparse
Version: 1:3.4.0-2ubuntu3
Depends: libc6 (>= 2.1.3)
Description: column approximate minimum degree ordering library for sparse matrices
 Suitesparse is a collect�PNG

   IHDR         ��a  �IDATxڥ�KOQ��F� �?�F��p����Ąą"[��	�NoSncRL &j����꤅��Mn!��V��ҙvx=�"�q���;��9�9��������e9Dk��2�o[���rS�X^�"(K�u�"WQPF��02�����75	c��eH��h�
�U[�z�ù�,�N�g��>���@����)k;f�!б��b�"�K
�]|'�YK��QO9c���|�2����3^/�(�;+�� #}/`�4����͛_�r�:�w2��‮Fq\��tm��[(�7��C�}C>����r�%d��9 ��O 555qzFD6ք�zv�cE�F�AO|o.��0��&����-Q_��Hl�:x�v����L���� �?c������S�#v�����j�z�I���9��3 {�M(f^C?�"�t#w��NvWbs���z(R-�L����T �+/�@x3� � ���壶7    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      $$?$$$?????????$$$$?$$$?$$$$$$?$$$?$�???????????$??$???????? $?$$$$$����  $ ??$ $??$$ $?$?$$$$$$$?� $????$$$$ $� ???$$$????????????$$     $?????$ $$?<8???$ ?$$?$$$$?????$$$$?$$$$$$$$?$$??????????$$$?$$????????$?$????$?�$ ??????$??????$$$???$$$$$???$$$$$$$$$$?????$$$$$?????$$$$$$$$$$?????$$$$$$?????$$$$$$$ $ $$$$ $ $$$$��$$$$��$$$$?$?????$� $?$?????$� $$??$$��?$$$?$$?$??$$$????$$$$?$$???????$??????$$?????????$??$????$$$$?????$?????$?$$?? $?????$?$????$?$$?????$$$?????$$$?????$$$?????$??$???????$$?$$$ $$$$$ �$$?$$???$????�$$$$$????$??$?????$$$ ???????$??$$$??$$??$$??$???� $$$$$   ????$?$???$$??$$   $$$ $    ????$$$$ $ $$$$$?$$ $$??$$????$?�???$???????$$???????$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$???$$$?$??$$??$$?$?$$$?$??$$$$$??$$?$$$$?$$$??$?$$????$$???$$?$$$$$$$??????$??$$????$?$$$???$$?$??$$??$$?????$??$???$�??$??$?$?$$�???$?$$$$$$???$?????$�?$?$$�$?$$??$$$??$$$?$$$$$$$$$$$$???$$?$$$$???$$?????$?$$??$$$?$$$?????????$$$$?$$?? �????????$?$???$??$$?<$$$$?$$?$$????????�$$$?� ??$?$$????$???$$? $$  $$��$?$ ???   $$$$$$?$$??$$$$$??$?$$$$$$$$$$$$?$$$$$$$  $?$?$$$$$??$$??$??$$?$$????????$$????$??$$$?????$$$$??????$$???$?$???$$?$$$$$$�� $?$??$?� ??$??$?$??????$??�� ?$??$$?$??$??$$$$??$$??$$??$?$$$?????????????$$?????????????$??????$???$$????$$$?$?????$????� ??88??????????????$$$$$$$$$$??$$$$$$$???$$??$????$$ ?$?$?$$?$$$$$?$$$$$$$  $$$$$$?$$$$$$$  $$$$$$$$$$?$$$$$$$$$?$????$$$$$$$  $$$$$$$?$????$$$$$$$  $$$$$$$$$$$?$$$$$$$$$?????$$$$$$ $$$$$$$$?????$$$$$$ $$$???$$$$$ $ $ $$$$$ $ $ ���$$??$$$$$ $$$��$$??$$$$$ $$$��?????$ $ $�?$$?$  $$$$ $$?????$��  $ $$?????$��  $$$$?????$$$$?$???$?$????????$????$?$??$$ $??$???$? $  $?$$$???$??$?????$$???????$$$$$$?$$???$$� ?$???$� � $$????$????� ??$$????$$??$$$??� ????$$?????$$????????????$???????$$$ ??$$$ $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$?????????????��� ???????$????????????$??????$??$$?$???$?$?$$$$$??$$$$�$???$?$$?$??$$$??$?$?????88???$????$??$$????????????????????????$??$?$??$????????$� ?????$?????????$$$$?? $   $$$????? ??$????? $   ??????$????????????$$$$$???$ ??$$?? ?$?$?????????$?$� ???$?$$$$??$???????$???????$?$� ???????????????????????????????????????<????$?$? ????<��?????????$$$$$$$$$?????????????�� ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????�����������$$$$$???$??$?$?$$$$???�$?????$????????$??8<888<8?$$$$$$$$$$$$$??$???$$$�??$?$$?�????$???$$$$�??$?$$��??$??$�??$$$$??8??????$$$$????$??8$?$$???????????$????????????$$???????$??$$??????$????????????$?$$$$$?$???�$$� $�$???????$$$$$?$?$??$???$????$??$$$$?$$?????$$$$????$$$???????????$?????$$?$$$$$$� ?$$�?$?$??$??$$$$$??????$?$$$???????????$???$$$?????????????? ????????$???????$?????????$????????????????????????????????$$$$$$$$$$$$$$?$???$$$???????$??$?$?$??$???????$?$?$$??$$$$??????$$$?$$?$?�$$$?$$?$$?�$???$?$???????$?????$?$$$$$$$$$$$$$$?$$$$$$?$$$??$$$$$???$??$$??$$$$???�???????????????????????$?? $?$?$??$????$$??$????$?$????$$???$$????$??$?$$? ????$$$?????$??????$????$$$$??$?$?$$$$$??????$$$?�����$$?$$?$$$$????$$�$$$?$$????$�$$$$?????$�$$$$$$?$$????$�$$$?????$�$$$?????$�$$$?????$$�$$$$$$$?????$$$�$$$$$$$$?$$????$??$$$$?$$?8�$????$$$� ?$??$$$????$$$ $$$$???$$ $$$$???$$ $$$$$$$??????$$$ $$$$?????$$ $$$$?????$$ $$$$$$$$?????$$$ $$$$?????$$$ $$$$ $$$$ $$$$��$$$$��$$$$$?????$� $$?????$� ????$?$$$$$$$$$$��  ?$?$$$???$$$$$$$$$$$$$????$??$$?????????????????$$$??????$$$$���� $?$�� $$???�???$$$� $$$???$??$????$$$??$?????$????$$???????$$?????????$$$$?$$?$?$???????$$??????$??$????$$???????$$$???$?????????$??$?????$??$$$$?????��  ???????????$????????????????????? ?????$?� ????????$??????????????????????$ ??????$?$$????????$???????????$?�?????????????$?$$$???????$?$$�� $?????????????????????????????$???????$�?$?$?????$?????$???$?$$?$??????$????????$$??$$$??$?$?$$$????$??$$��  ??????$?$$��  ?$$$$????$? ???????????$??$� ??$??????$?$?$????$?$$� ??????$?$????$?$$$$????$?$??$$?$� ????$� ?$??$?$??$� $$??� ?$$$?$???$?$$� ?$$$????$?$???????$?$?$??????$$??????$$?$$$??????$$$$$$$$$$$$$$$$$$$$$ $$ulti-Arch: same
Priority: optional
Section: libs
Installed-Size: 127
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: soundtouch
Version: 1.6.0-2build1
Depends: libc6 (>= 2.3.4), libgcc1 (>= 1:4.1.1), libstdc++6 (>= 4.1.1)
Pre-Depends: multiarch-support
Description: Sound stretching library
 SoundTouch is a library that can be used to change pitch and time
 of soundfiles independently.
 .
 This package contains the libsoundtouch0 shared library.
Original-Maintainer: Debian Multimedia Maintainers <pkg-multimedia-maintainers@lists.alioth.debian.org>
Homepage: http://www.surina.net/soundtouch/

Package: libbamf3-0
Status: install ok installed
Multi-Arch: same
Priority: optional
Section: libs
Installed-Size: 113
Maintainer: Ubuntu Core Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: bamf
Version: 0.2.118-0ubuntu0.3
Depends: libc6 (>= 2.1.3), libdbus-glib-1-2 (>= 0.88), libglib2.0-0 (>= 2.28.0), bamfdaemon (= 0.2.118-0ubuntu0.3)
Pre-Depends: multiarch-support
Breaks: unity (<< 3.2.12)
Description: Window matching library - shared library
 bamf matches application windows to desktop files
 .
 This package contains shared libraries to be used by applications.
Homepage: https://launchpad.net/bamf

Package: libcairomm-1.0-1
Status: install ok installed
Multi-Arch: same
Priority: optional
Section: libs
Installed-Size: 201
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: cairomm
Version: 1.10.0-1ubuntu1
Replaces: libcairomm-1.0-0
Depends: libc6 (>= 2.1.3), libcairo2 (>= 1.10.0), libgcc1 (>= 1:4.1.1), libsigc++-2.0-0c2a (>= 2.0.2), libstdc++6 (>= 4.4.0)
Pre-Depends: multiarch-support
Description: C++ wrappers for Cairo (shared libraries)
 cairomm provides C++ bindings for the Cairo graphics library,
 a multi-platform library providing anti-aliased vector-based
 rendering for multiple target backends.
 .
 This package contains the shared libraries.
Homepage: http://cairographics.org/cairomm/
Original-Maintainer: Dave Beckett <dajobe@debian.org>

Package: unity-2d-common
Status: install ok installed
Priority: optional
Section: x11
Installed-Size: 124
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: all
Source: unity-2d
Version: 5.12.0-0ubuntu1.2
Replaces: unity-2d (<< 5.7.0)
Depends: dconf-gsettings-backend | gsettings-backend
Description: Common files for Unity 2D Shell
 This is part of Unity 2D and contains the common files needed by multiple
 components of it.
Original-Maintainer: Olivier Tilloy <olivier.tilloy@canonical.com>

Package: usbutils
Status: install ok installed
Priority: optional
Section: utils
Installed-Size: 651
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Version: 1:005-1
Depends: libc6 (>= 2.4), libusb-1.0-0 (>= 2:1.0.8), zlib1g (>= 1:1.2.3.3.dfsg)
Suggests: wget (>= 1.8.1-6) | lynx (>= 2.8.4.1b-3)
Description: Linux USB utilities
 This package contains the lsusb utility for inspecting the devices
 connected to the USB bus. It shows a graphical representation of the
 devices that are currently plugged in, showing the topology of the
 USB bus. It also displays information on each individual device on
 the bus.
 .
 More information can be found at the Linux USB web site
 http://www.linux-usb.org/ .
Original-Maintainer: Aurelien Jarno <aurel32@debian.org>

Package: libdevmapper1.02.1
Status: install ok installed
Priority: required
Section: libs
Installed-Size: 204
Maintainer: Ubuntu Core Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: lvm2 (2.02.66-4ubuntu7.1)
Version: 2:1.02.48-4ubuntu7.1
Provides: libdevmapper
Depends: libc6 (>= 2.4), libselinux1 (>= 1.32), libudev0 (>= 147), dmsetup (>= 2:1.02.48-4ubuntu7.1)
Breaks: lvm2 (<< 2.02.66)
Description: The Linux Kernel Device Mapper userspace library
 The Linux Kernel Device Mapper is the LVM (Linux Logical Volume Management)
 Team's implementation of a minimalistic kernel-space driver that handles
 volume management, while keeping knowledge of the underlying device layout
 in user-space.  This makes it useful for not only LVM, but EVMS, software
 raid, and other drivers that create "virtual" block devices.
 .
 This package contains the (user-space) shared library for accessing the
 device-mapper; it allows usage of the device-mapper through a clean,
 consistent interface (as opposed to through kernel ioctls).
Homepage: http://sources.redhat.com/lvm2/
Original-Maintainer: Debian LVM Team <pkg-lvm-maintainers@lists.alioth.debian.org>

Package: ttf-freefont
Status: install ok installed
Priority: optional
Section: fonts
Installed-Size: 5020
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: all
Version: 20100919-1
Description: Freefont Serif, Sans and Mono Truetype fonts
 A set of free high-quality TrueType fonts covering the UCS
 character set. These fonts are similar to the (in)famous Helvetica,
 Times and Courier fonts.
Original-Maintainer: Debian Fonts Task Force <pkg-fonts-devel@lists.alioth.debian.org>
Homepage: http://savannah.gnu.org/projects/freefont/

Package: libxi6
Status: install ok installed
Multi-Arch: same
Priority: optional
Section: libs
Installed-Size: 141
Maintainer: Ubuntu X-SWAT <ubuntu-x@lists.ubuntu.com>
Architecture: i386
Source: libxi
Version: 2:1.6.0-0ubuntu2
Depends: libc6 (>= 2.4), libx11-6 (>= 2:1.4.99.1), libxext6
Pre-Depends: multiarch-support
Description: X11 Input extension library
 libXi provides an X Window System client interface to the XINPUT
 extension to the X protocol.
 .
 The Input extension allows setup and configuration of multiple input devices,
 and will soon allow hotplugging of input devices; to be added and removed on
 the fly.
 .
 More information about X.Org can be found at:
 <URL:http://www.X.org>
 .
 This module can be found at
 git://anongit.freedesktop.org/git/xorg/lib/libXi
Original-Maintainer: Debian X Strike Force <debian-x@lists.debian.org>

Package: gstreamer0.10-ffmpeg
Status: install ok installed
Priority: optional
Section: libs
Installed-Size: 375
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Version: 0.10.13-1
Depends: libavcodec53 (>= 4:0.7.3-1) | libavcodec-extra-53 (>= 4:0.7.3-1), libavformat53 (>= 4:0.7.3-1) | libavformat-extra-53 (>= 4:0.7.3-1), libavutil51 (>= 4:0.7.3-1) | libavutil-extra-51 (>= 4:0.7.3-1), libc6 (>= 2.7), libglib2.0-0 (>= 2.31.2), libgstreamer-plugins-base0.10-0 (>= 0.10.31), libgstreamer0.10-0 (>= 0.10.31), liborc-0.4-0 (>= 1:0.4.16), libpostproc52 (>= 4:0.7.3-1) | libpostproc-extra-52 (>= 4:0.7.3-1), libswscale2 (>= 4:0.7.3-1) | libswscale-extra-2 (>= 4:0.7.3-1), libavcodec53 (<< 5:0) | libavcodec-extra-53 (<< 5:0)
Description: FFmpeg plugin for GStreamer
 This GStreamer plugin supports a large number of audio and video compression
 formats through the use of the FFmpeg library.  The plugin contains GStreamer
 elements for decoding 90+ formats (AVI, MPEG, OGG, Matroska, ASF, ...),
 demuxing 30+ formats and colorspace conversion.
 .
 http://www.ffmpeg.org/
 http://gstreamer.freedesktop.org/
 http://gstreamer.freedesktop.org/modules/gst-ffmpeg.html
Original-Maintainer: Maintainers of GStreamer packages <pkg-gstreamer-maintainers@lists.alioth.debian.org>
Gstreamer-Decoders: application/gxf; application/mxf; application/x-ape; application/x-gst_ff-RoQ; application/x-gst_ff-avs; application/x-gst_ff-daud; application/x-gst_ff-ea; application/x-gst_ff-ffm; application/x-gst_ff-film_cpk; application/x-gst_ff-idcin; application/x-gst_ff-ipmovie; application/x-gst_ff-mm; application/x-gst_ff-mmf; application/x-gst_ff-nut; application/x-gst_ff-nuv; application/x-gst_ff-psxstr; application/x-gst_ff-smk; application/x-gst_ff-sol; application/x-gst_ff-vmd; application/x-gst_ff-voc; application/x-gst_ff-wc3movie; application/x-gst_ff-wsaud; application/x-gst_ff-wsvqa; application/x-shockwave-flash; application/x-yuv4mpeg, y4mversion=(int)2; audio/AMR; audio/AMR-WB; audio/G722; audio/mpeg, mpegversion=(int)1, layer=(int){ 2, 1 }; audio/mpeg, mpegversion=(int)4, stream-format=(string)loas; audio/mpeg, mpegversion=�PNG

   IHDR         (-S  PLTE�������������������������������������������������������������������������������������������»�¼��������ܻ����ຽ�������������4e�D`�Dt�e�i�:r��uP{x���׊�׋l��n���ѯ�,�ヺ����N��P�3>��
�������� �))� �=����������������������y �������������)��,������������������������f9�"   *tRNS !+,-8?STX[cfflpuu|�������������������Σ   �IDATx�M��R�P�QTT\@eQ@$蕘����,�@���X$E�4s^�Z� QY�V곟	��S ������>`DRk�����&�gm�����co�u�i��H�8]�b�=;���1�׏��S1M�qAw	O����o���;��l�z|͞��u��Tժ�z?���z5+���T��_ч8��f�`�՜��Qvocmn8���( ��8    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    �PNG

   IHDR         ��a  *IDATxڍ��O�a��>�՟ӗ��>6_���\�f/�j}1IDV&#+K��}�z�7m�E�H(R�d�M�@$nW7��+S������:��s>��~�ґew����z(��'�����cA�'�A�OD����eE�CWC���FgǱ����\��"8���D��ӑ�����<S듩9��#����N�V�z�D���tu`�Ʀ�y�Px
��!V���F��b
�a����7s��E�ZH�3j��m^'�׉�Ki�� k>A'�#9���ӭ�Mx�t����R�;��jd���q7|�7�M��	��c�%bve3�\��V&������;�6l�3[y�� �Ws��RȢ_�'�Z����>ja�T���,��,�(�/�T)p�\>E?"������#��;bwX%bsXŵr	���/���\.�n߽��ZT��`�+XL�Je52�e�>G��YD"aV���䁼�Ba���_���@����ٻ�R��B⠞�Eʕ2���}�N7�\�z�k�%�ʞk�Sp��<�z8��R�{�z׼�\$:r0��    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             �������T$�E ����1҅��0����E ���%����T$�$������T$�E     �	������   ������T$�\$�$T��i����T$�E �������   ������T$�\$�$��<����T$�E �{���UWV��S�˃�\�D$D�T$,�D$D    �D$�D$    �4$�1����ǋD$D��t~�$�D$������\[^_]Ív �T$,�l$�$���T$������L$D�ŉ������,$�����D$D��t(�(���u�,����q  �$�����D$D    �$������<$����������7  �D$    �l$�4$�S����D$   �É$��������Y����D$���,$������t��T$,�l$�$���T$�����������D$H    �D$    �\$�D$0�D$H�D$�D$0�$�Z����D$H����   �T$D�D$�$�����,$�����l$D���)��������D$   �D$�D$D�$������u�(����  �D$D�����f��(���u�,���t��D$   �D$Ԭ�$    �a����\$�$����븍v �<$������\[^_]Ëh�D$   �D$t��$    �!����l$�\$�$������D$D�W����D$0�D$    �D$���D$���$��������   �D$0�T$H�T$�D$    �D$���D$���$�p����D$4�D$0�$�`����D$H��th�D$�D$D�$�8��������v �D$D�h�D$   �D$��$    �]����l$�\$�$����������D$0�$������Y�����&    �T$4��у�����   �\$0�Ӊt$<�Ή|$8�$�E����T$L�T$�ǋ�$�������t<rS����   �D$    �D$Я�D$�   �D$���$    �E�����t& �(�����   �D$L�$������4��|$�$�v����,$��������$�D$�����<$��������\$�D$�4��$������D$H����   ����F����(����|$8�\$0�t$<�D$4�$������:����(���t�D$L�$�C���뼋�|$L�D$   �D$��$    ������T$0�|$�\$�T$�$�w���붋T$L��D$   �D$���T$(�$    �����T$(�\$�T$�T$0�$�T$�3���������D$�D$D�|$8�$�\$0�t$<�����D$4�$�����s����S���\$$�D$    �D$0��$�0����\$ ��[�#������UWVS�i   ��*  ���l$0��������������)�����t)1���    �D$8�,$�D$�D$4�D$��������9�u߃�[^_]����������������Ë$Ð���������U��S�������t��f����Ћ���u��[]Ð�S���    [��o)  �?�����[�               "%s" does not contain a subtype "%s" contains an empty subtype  "%s" contains an invalid character in the subtype   "%s" is an old media type that should be replaced with a modern equivalent  "%s" a media type that contains an invalid character    the use of "%s" as media type is strongly discouraged in favor of a subtype of the "application" media type "%s" is a media type that probably does not make sense in this context  "%s" is a media type that must not be used  "%s" is an unregistered media type  "%s" should be replaced with "%s"   zz-application/zz-winassoc-123  zz-application/zz-winassoc-cab  application/vnd.ms-cab-compressed   zz-application/zz-winassoc-cdr  zz-application/zz-winassoc-doc  zz-application/zz-winassoc-hlp  zz-application/zz-winassoc-ini  zz-application/zz-winassoc-lwp  zz-application/zz-winassoc-lzh  zz-application/zz-winassoc-mdb  zz-application/zz-winassoc-xls x-directory X- multipart example misc/ultravox message message/rfc822 flv-application/octet-stream video/x-flv application/vnd.lotus-1-2-3 application/vnd.corel-draw application/vnd.ms-word application/winhlp text/plain application/vnd.lotus-wordpro application/x-lzh-compressed application/vnd.ms-access zz-application/zz-winassoc-uu text/x-uuencode application/vnd.ms-excel inode x-content x-scheme-handler chemical application audio image model text video           q���Ȩ����,���L�Ѫl���������̩%��B�\�z����������īͫ٫߫���%s%s- .desktop %s%s Hidden Desktop Entry MimeType update-desktop-database.c File "%s" lacks MimeType key
 quiet verbose [DIRECTORY...] %s
 applications ,  Search path is now: [%s]
 .mimeinfo.cache.XXXXXX w+ [MIME Cache]
 mimeinfo.cache Could not process directory "%s": %s
   Warning in file "%s": usage of MIME type "%s" is discouraged (%s)
  Error in file "%s": "%s" is an invalid MIME type (%s)
  Could not parse file "%s": %s
  Do not display any information about processing and updating progress   Display more information about processing and updating progress Build cache database of MIME types handled by desktop files.    Run "%s --help" to see a full list of available command line options.
  Cache file "%s" could not be written: %s    Could not create cache file in "%s": %s
    The databases in [%s] could not be updated.
    process_desktop_file    ;P   	   ����l   8���b-common (= 1.99-21ubuntu3.4)
Suggests: desktop-base (>= 4.0.6)
Description: GRand Unified Bootloader, version 2 (PC/BIOS binaries)
 GRUB is a portable, powerful bootloader.  This version of GRUB is based on a
 cleaner design than its predecessors, and provides the following new features:
 .
  - Scripting in grub.cfg using BASH-like syntax.
  - Support for modern partition maps such as GPT.
  - Modular generation of grub.cfg via update-grub.  Packages providing GRUB
    add-ons can plug in their own script rules and trigger updates by invoking
    update-grub2.
  - VESA-based graphical mode with background image support and complete 24-bit
    color set.
  - Support for extended charsets.  Users can write UTF-8 text to their menu
    entries.
 .
 This package contains a version of GRUB that has been built for use with
 traditional PC/BIOS architecture.  It will not automatically install GRUB
 as the active boot loader, nor will it automatically update grub.cfg on
 upgrade, so most people should install grub-pc instead.
Homepage: http://www.gnu.org/software/grub/
Original-Maintainer: GRUB Maintainers <pkg-grub-devel@lists.alioth.debian.org>

Package: ssh-askpass-gnome
Status: install ok installed
Priority: optional
Section: gnome
Installed-Size: 122
Maintainer: Colin Watson <cjwatson@ubuntu.com>
Architecture: i386
Source: openssh
Version: 1:5.9p1-5ubuntu1
Replaces: ssh (<< 1:3.5p1-3)
Provides: ssh-askpass
Depends: libc6 (>= 2.3.6-6~), libglib2.0-0 (>= 2.12.0), libgtk2.0-0 (>= 2.8.0), libx11-6, openssh-client | ssh (>= 1:1.2pre7-4) | ssh-krb5
Description: interactive X program to prompt users for a passphrase for ssh-add
 This has been split out of the main openssh-client package so that
 openssh-client does not need to depend on GTK+.
 .
 You probably want the ssh-askpass package instead, but this is
 provided to add to your choice and/or confusion.
Homepage: http://www.openssh.org/
Original-Maintainer: Debian OpenSSH Maintainers <debian-ssh@lists.debian.org>

Package: libmono-system-xml4.0-cil
Status: install ok installed
Priority: optional
Section: cli-mono
Installed-Size: 1320
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: all
Source: mono
Version: 2.10.8.1-1ubuntu2.2
Depends: libmono-corlib4.0-cil (>= 2.10.1), libmono-system4.0-cil (>= 2.10.7)
Description: Mono System.Xml library (for CLI 4.0)
 Mono is a platform for running and developing applications based on the
 ECMA/ISO Standards. Mono is an open source effort led by Novell.
 Mono provides a complete CLR (Common Language Runtime) including compiler and
 runtime, which can produce and execute CIL (Common Intermediate Language)
 bytecode (aka assemblies), and a class library.
 .
 This package contains the Mono System.Xml library for CLI 4.0.
Homepage: http://www.mono-project.com/
Original-Maintainer: Debian Mono Group <pkg-mono-group@lists.alioth.debian.org>

Package: activity-log-manager-common
Status: install ok installed
Priority: optional
Section: utils
Installed-Size: 103
Maintainer: Siegfried-Angel Gevatter Pujals <rainct@ubuntu.com>
Architecture: all
Source: activity-log-manager
Version: 0.9.4-0ubuntu3
Description: blacklist configuration for Zeitgeist (assets)
 Zeitgeist is a service which logs the user's activities and events (files
 opened, websites visited, conversations held with other people, etc.) and
 makes the relevant information available to other applications.
 .
 It serves as a comprehensive activity log and also makes it possible to
 determine relationships between items based on usage patterns.
 .
 This package contains the assets for either activity-log-manager or
 activity-log-manager-control-center.
Homepage: https://launchpad.net/activity-log-manager

Package: libxxf86dga1
Status: install ok installed
Priority: optional
Section: libs
Installed-Size: 76
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: libxxf86dga
Version: 2:1.1.2-1
Depends: libc6 (>= 2.3.4), libx11-6, libxext6, x11-common
Description: X11 Direct Graphics Access extension library
 libXxf86dg:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  1ea34c02248959a0e4d245025939bf22 1:12.04+20120417 2.3.6 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  19afb8a7e8e7f44f6106f269aa4eebbc 1:12.04+20120417 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  0aa9b7870b4e450291143f74e957e291 1:12.04+20120417 2.3.6 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  047f9630396ed1a0259a4bb51e951c29 1:12.04+20120417 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  0514f99032fd1976655c4bf7e03146bc 1:12.04+20120417 2.3.6 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  a2c4b8a2b8ddc06f922a6291ade84644 1:12.04+20120417 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  3f30c4eb0cd24bb561962e8944e1ae94 1:12.04+20120417 2.3.6 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  5b14f287c08e4c4a2441ebccbbad6326 1:12.04+20120417 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  9735e26fab2615ce1f07455f43c80c18 1:12.04+20120417 2.3.6 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  627408b57387efc1e84177b265b49548 1:12.04+20120417 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  9bc018ae73b4ac969beedd81b505cad8 1:12.04+20120417 2.3.6 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  bcebffceddd49e05e105d0da1aa05ebb 1:12.04+20120417 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  b2761457a20745c49d546a0de3e1a874 1:12.04+20120417 2.3.6 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  7c61e46eaba33ce65cdb79bffeb31ddf 1:12.04+20120417 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  a36efa2e9ffdbe0e1c5132e7b3bc555b 1:12.04+20120417 2.3.6 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  54ed36b2d46b04c8b30c110398daa507 1:12.04+20120417 1:12.04+20120417 1.10.27ubuntu1 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417 1:12.04+20120417  15eb580da4dd803cc6c7d597c3a74bb2 1:12.04+20120417                      |\ �  *�  �  �d  �O    �\ 0k  +�  �  �d  �O    �\ t  ,�  �  �d  �O        �-  -�      �d  �O     �\ 0k  .�  *�  �d  �O    �\ .k  /�  �  �d  �O    �\ /k  0�  �  �d  �O    �\ &S  1�  �  �d  �O    �\ 1k  2�  �  �d  �O    �\ 0k  3�  -�  �d  �O    ] �-      �  �d  �O    L] 7k  5�  �  �d  �O    ]] t  6�  +�  �d   P    l] 2k  7�  
�  �d  P    }] 3k  8�  �  �d  P    �] 5k  9�  �  �d  P    �] 6k  :�  �  �d  P    �] 4k  ;�  �  �d  P        7k      4�  �d  P     �] �  =�  )�  �d  P    �] 4k  >�  :�  �d  P    ^ t  ?�  5�  �d  	P        �-  @�      �d  
P     ^ 4k  A�  =�  �d  P    +^ 2k  B�  6�  �d  P    <^ 3k  C�  7�  �d  P    M^ 5k  D�  8�  �d  P    ^^ 6k  E�  9�  �d  P    o^ 4k  F�  @�  �d  P    �^ 7k      ;�  �d  P    �^ �-  H�  "�  �d  P    �^ t  I�  >�  �d  P    �^ 8k  J�  �  �d  P    �^ 9k  K�  �  �d  P    _ ;k  L�  �  �d  P    _ <k  M�   �  �d  P    (_ :k  N�  !�  �d  P        �-      G�  �d  P     l_ �  P�  <�  �d  P    r_ :k  Q�  M�  �d  P    �_ t  R�  H�  �d  P        �-  S�      �d  P     �_ :k  T�  P�  �d  P    �_ 8k  U�  I�  �d  P    �_ 9k  V�  J�  �d   P    �_ ;k  W�  K�  �d  !P    �_ <k  X�  L�  �d  "P    �_ :k  Y�  S�  �d  #P    �_ �-      N�  �d  $P    <` Bk  [�  5�  �d  %P    M` t  \�  Q�  �d  &P    \` =k  ]�  0�  �d  'P    m` >k  ^�  1�  �d  (P    ~` @k  _�  2�  �d  )P    �` Ak  `�  3�  �d  *P    �` ?k  a�  4�  �d  +P        Bk      Z�  �d  ,P     �` �  c�  O�  �d  -P    �` ?k  d�  `�  �d  .P    �` t  e�  [�  �d  /P    
a ?k  f�  c�  �d  0P    a =k  g�  \�  �d  1P    ,a >k  h�  ]�  �d  2P    =a @k  i�  ^�  �d  3P    Na Ak  j�  _�  �d  4P    _a ?k  k�  e�  �d  5P    pa Bk      a�  �d  6P    �a Hk  m�  I�  �d  7P    �a t  n�  d�  �d  8P    �a Ck  o�  D�  �d  9P    �a Dk  p�  E�  �d  :P    �a Fk  q�  F�  �d  ;P    b Gk  r�  G�  �d  <P    b Ek  s�  H�  �d  =P        Hk      l�  �d  >P     \b �  u�  b�  �d  ?P    bb Ek  v�  r�  �d  @P    sb t  w�  m�  �d  AP    �b Ek  x�  u�  �d  BP    �b Ck  y�  n�  �d  CP    �b Dk  z�  o�  �d  DP    �b Fk  {�  p�  �d  EP    �b Gk  |�  q�  �d  FP    �b Ek  }�  w�  �d  GP    �b Hk      s�  �d  HP    ,c Nk  �  \�  �d  IP    =c t  ��  v�  �d  JP    Lc Ik  ��  W�  �d  KP    ]c Jk  ��  X�  �d  LP    nc Lk  ��  Y�  �d  MP    c Mk  ��  Z�  �d  NP    �c Kk  ��  [�  �d  OP        Nk      ~�  �d  PP     �c �  ��  t�  �d  QP    �c Kk  ��  ��  �d  RP    �c t  ��  �  �d  SP    �c Kk  ��  ��  �d  TP    d Ik  ��  ��  �d  UP    d Jk  ��  ��  �d  VP    -d Lk  ��  ��  �d  WP    >d Mk  ��  ��  �d  XP    Od Kk  ��  ��  �d  YP    `d Nk      ��  �d  ZP    �d Tk  ��  ��  �d  [P    �d t  ��  ��  �d  \P    �d Ok  ��  ��  �d  ]P    �d Pk  ��  ��  �d  ^P    �d Rk  ��  ��  �d  _P    �d Sk  ��  ��  �d  `P    e Qk  ��  ��  �d  aP        Tk      ��  �d  bP     Le �  ��  ��  �d  cP    Re Qk  ��  ��  �d  dP    ce t  ��  ��  �d  eP    re Qk  ��  ��  �d  fP    �e Ok  ��  ��  �d  gP    �e Pk  ��  ��  �d  hP    �e Rk  ��  ��  �d  iP    �e Sk  ��  ��  �d  jP    �e Qk  ��  ��  �d  kP    �e Tk      ��  �d  lP    f �-  ��  o�  �d  mP    -f t  ��  ��  �d  nP    <f Uk  ��  j�  �d  oP    Mf Vk  ��  k�  �d  pP    ^f (S  ��  l�  �d  qP    of Xk  ��  m�  �d  rP    �f Wk  ��  n�  �d  sP        �-      ��  �d  tP     �f �  ��  ��  �d  uP    �f Wk  ��  ��  �d  vP    �f t  ��  ��  �d  wP        �-  ��      �d  xP     �f Wk  ��  ��  �d  yP    �f Uk  ��  ��  �d  zP    g Vk  ��  ��  �d  {P    g (S  ��  ��  �d  |P    .g Xk  ��  ��  �d  }P    ?g Wk  ��  ��  �d  ~P    Pg �-      ��  �d  P    �g ]k  ��  ��  �d  �P    �g t  ��  ��  �d  �P    �g Yk  ��  }�  �d  �P    �g Zk  ��  ~�  �d  �P    �g *S  ��  �  �d  �P    �g \k  ��  ��  �d  �P    �g [k  ��  ��  �d  �P        ]k      ��  �d  �P     <h �  ��  ��  �d  �P    Bh [k  ��  ��  �d  �P    Sh t  ��  ��  �d  �P    bh [k  ��  ��  �d  �P    sh Yk  ��  ��  �d  �P    �h Zk  ��  ��  �d  �P    �h *S  ��  ��  �d  �P    �h \k  ��  ��  �d  �P    �h [k  ��  ��  �d  �P    �h ]k      ��  �d  �P    i ck  ��  ��  �d  �P    i t  ��  ��  �d  �P    ,i ^k  ��  ��  �d  �P    =i _k  ��  ��  �d  �P    Ni ak  ��  ��  �d  �P    _i bk  ��  ��  �d  �P    pi `k  ��  ��  �d  �P        ck      ��  �d  �P     �i �  ��  ��  �d  �P    �i `k  ��  ��  �d  �P    �i t  ��  ��  �d  �P    �i `k  ��  ��  �d  �P    �i ^k  ��  ��  �d  �P    �i _k  ��  ��  �d  �P    j ak  ��  ��  �d  �P    j bk  ��  ��  �d  �P    /j `k  ��  ��  �d  �P    @j ck      ��  �d  �P    �j �-  ��  ��  �d  �P    �j t  ��  ��  �d  �P    �j dk  ��      �- x -w �_ ��        �- x .w �_ ��    �>� k  x �w �_ ��       �- x     �_ ��        �-         �_ ��        � x �w �_ ��        � x �w �_ ��        �� x �w �_ ��        � 	x �w �_ ��        � 
x �w �_ ��        �U x �w �_ ��        �U x �w �_ ��        Y- x �w �_ ��        �- x �w �_ ��        �- x 9w �_ ��        �- x     �_ ��        �- x :w �_ ��        �-         �_ ��        � x �w �_ ��        �� x �w �_ ��        �� x �w �_ ��        � x �w �_ ��        � x �w �_ ��        �� x Cv �_ ��        � x     �_ ��        I x �w �_ ��        �� x �v �_ ��        # x  w �_ ��        � x �w �_ ��        � x �w �_ ��        � x �w �_ ��        ��  x �w �_ ��        � !x �w �_ ��        �� "x �w �_ ��        U- #x �w �_ ��         $x �5 �_ ��        �- %x �w �_ ��        �- &x x �_ ��    R?� k  'x x �_ ��       �- (x x �_ ��        �-         �_ ��        � *x x �_ ��        � +x x �_ ��        �� ,x x �_ ��        ! -x 5w �_ ��        �U .x 
x �_ ��        �U /x x �_ ��        �- 0x x �_ ��        �- 1x x �_ ��        �-         �_ ��    �?� �- 3x 1x �_ ��        4x �w �_ ��        �� 5x �w �_ ��         � 6x �w �_ ��          7x �w �_ ��        $ 8x �w �_ ��        �� 9x `v �_ ��        � :x     �_ ��        R ;x �w �_ ��        �� <x �v �_ ��        & =x Hw �_ ��        � >x �w �_ ��        � ?x �w �_ ��        T( @x �w �_ ��        �� Ax �w �_ ��        V( Bx �w �_ ��        �� Cx �w �_ ��        Z- Dx �w �_ ��         Ex 6 �_ ��        �- Fx �w �_ ��        �-     Vw �_ ��        �� Hx Ww �_ ��        7� Ix <v �_ ��        � Jx x �_ ��        �� Kx x �_ ��        � Lx x �_  �        4� %y _w �_ �                2.15 libghc-wai-test-doc libghc-wai-test-prof libghc-wai-test-dev-1.1.1-d161e  a1def92f30dfe0e68e37a1a538189ee6 1.1.1-1  94df89ddcd9d971583f12527fca9b9a5 1.1.1-1 1.1.1-1 libghc-wai-test-prof-1.1.1-d161e  f0478c7a4fef26f31f9a8eb3f1736bbf libghc-warp-dev 1.1.0.1-3 2.15 libghc-warp-doc libghc-warp-prof libghc-warp-dev-1.1.0.1-801da  57a1266b43c5f0e7314b4c0438c91c71 1.1.0.1-3  26af0d19d782a7cb6ed797bebf0dda5c 1.1.0.1-3 1.1.0.1-3 libghc-warp-prof-1.1.0.1-801da  bcc063c5bbea084a072b6ee27a8d86c2 libghc-wash-dev 2.12.0.1-7 2.15 3.0.4 libghc-wash-doc libghc-wash-prof libghc-washngo-dev-2.12.0.1-4b99f  1b3539e769a1a653748a17b2f4b37068 2.12.0.1-7  120e25ff6518a42306d2c4a6325bbcd8 2.12.0.1-7 2.12.0.1-7 libghc-washngo-prof-2.12.0.1-4b99f  17408a27b506c703a426bcefc01fbeef libghc-web-routes-dev 0.25.3-2 2.15 libghc-web-routes-doc libghc-web-routes-prof libghc-web-routes-dev-0.25.3-003d5  5a9b2f6aa22c42c763708f6cd74674e1 0.25.3-2  057ef8957120ed1357fcd0a728d3c100 0.25.3-2 0.25.3-2 libghc-web-routes-prof-0.25.3-003d5  6625864fe388faac6f4110319cabe521 libghc-webkit-dev 0.12.3-1 2.15 libghc-webkit-prof  daa2100234dbc675871aeb27f1d5efd0 0.12.3-1  f2b27da139565863cacf171c175bb6d8 0.12.3-1 0.12.3-1  17119fbe7f2f900b37b1cada9f1b0fca libghc-weighted-regexp-dev 0.3.1.1-2 2.15 libghc-weighted-regexp-doc libghc-weighted-regexp-prof libghc-weighted-regexp-dev-0.3.1.1-add2c  ec4c7e80aa5cdbed1b4d554d0ec2255c 0.3.1.1-2  05bac2ae99e9a276932140680d73746a 0.3.1.1-2 0.3.1.1-2 libghc-weighted-regexp-prof-0.3.1.1-add2c  7d35f54aee3228ebb6a782bcd34c9ca8 libghc-x11-dev 1.5.0.1-1 2.15 libghc-x11-doc libghc-x11-prof libghc-x11-dev-1.5.0.1-c9089  e6becb2b7e2a275b94c1c9f4000e41bd 1.5.0.1-1  f4444e9dfcf076f3a0a43d01ef20b48d 1.5.0.1-1 1.5.0.1-1 libghc-x11-prof-1.5.0.1-c9089  3092584cb36bb7acddf667c6f1c196cb libghc-x11-xft-dev 0.3.1-1 2.15 libghc-x11-xft-doc libghc-x11-xft-prof libghc-x11-xft-dev-0.3.1-cf6fd  683610253f6d4ae818c2267b5fa736f5 0.3.1-1  fc07c7eb6b4a50b94e1842752d76b419 0.3.1-1 0.3.1-1 libghc-x11-xft-prof-0.3.1-cf6fd  87aa8e68b39b5dd33bf8fe6532537556 libghc-xdg-basedir-dev 0.2.1-2build1 2.15 libghc-xdg-basedir-doc libghc-xdg-basedir-prof  21f90c6536b55cd88911c2156ba0ac9a 0.2.1-2build1  edcd48d2ced8ec1e43f0732e400499e5 0.2.1-2build1 0.2.1-2build1  71835e2df1c97c83b94b28bc0dfe815c 3000.2.0.5-1 2.15  73d11d98b819d8524d7c824bd540533e 3000.2.0.5-1  885c466f47e738e01589ae7bb0f3bb80 3000.2.0.5-1 3000.2.0.5-1  015623ee392ccd2476727b11297b4402 libghc-xml-conduit-dev 0.5.3-1 libghc-xml-types-dev-0.3.1-3dd82 2.15 libghc-xml-conduit-doc libghc-xml-conduit-prof  31f05e92091af9349f59312434c2d4ca 0.5.3-1 libghc-xml-types-doc  3f877feec0efbcb17c998e93cd241ecd 0.5.3-1 0.5.3-1 libghc-xml-types-prof-0.3.1-3dd82  47ca3daa47cdd43d6f27b586b93bf6e4 libghc-xml-dev 1.3.12-1 2.15 libghc-xml-prof  123c16c5593d2098714edfb589d40129 1.3.12-1  0f477a199bc244331458c5b101b594e0 1.3.12-1 1.3.12-1  2ff0ac272946acec63bf64db9ebf7978 libghc-xml-types-dev 0.3.1-2 2.15 libghc-xml-types-prof  933d99034a84f3b3f47849322a26c65c 0.3.1-2  7b47e7ecf279a428ba471091a8f8ad1b 0.3.1-2 0.3.1-2  93162781ffcc5854814578688b5c6b1a libghc-xmonad-contrib-dev 0.10-3 libghc-xmonad-dev-0.10-cca28 2.15 libghc-xmonad-contrib-doc libghc-xmonad-contrib-prof xmonadcontrib libghc-xmonad-contrib-dev-0.10-59163  974fe40f0fb1e57fa65270d1e9506790 0.10-3 libghc-xmonad-doc  93a68a39d8db9e574cfea7042d22786c 0.10-3 0.10-3 libghc-xmonad-prof-0.10-cca28 libghc-xmonad-contrib-prof-0.10-59163  dc4a6b1eabfe7f0ac86c6a1d9c5b8860 libghc-xmonad-dev 0.10-3 2.15 libghc-xmonad-prof  ad7e7171de8181ad42629f803002795c 0.10-3  cb6fba8d54c979a7896abb8ce42ed201 0.10-3 0.10-3  c6f74372f7ad778ec694a8d3416f56dc libghc-xss-sanitize-dev 0.3.1-2 2.15 libghc-xss-sanitize-doc libghc-xss-sanitize-prof  93edd90983a0279b25a943bf84508428 0.3.1-2  0146e1aac5438be599c161680dbde4eb 0.3.1-2 0.3.1-2  e70e200c85d1de0340c0b6bbacb27f59 libghc-yaml-dev 0.5.2-3 2.15 libghc-yaml-doc libghc-yaml-prof libghc-yaml-dev-0.5.2-3b587  19c256883f440473a2df84b5a6902fd6 0.5.2-3  2c08be9455e372122e209fdd8d4d9b51 libghc-yaml-light-dev 0.1.4-2 2.15 libghc-yaml-light-doc libghc-yaml-light-prof libghc-yaml-light-dev-0.1.4-5b59b  59e5865ec9b4285799cafcab307b9fa8 0.1.4-2  9cf5989a2f43dc8e60e2ed8c4cea72d7 0.1.4-2 0.1.4-2 libghc-yaml-light-prof-0.1.4-5b59b  1dd08683794c4bead1c6d5a387627c1c 0.5.2-3 0.5.2-3 libghc-yaml-prof-0.5.2-3b587  2a8caa0753a11e60fa9de79feead1c77 libghc-yesod-auth-dev 0.8.1.1-1 libghc-yesod-core-dev-0.10.2.1-b07a0 libghc-yesod-form-dev-0.4.2-d5375 libghc-yesod-json-dev-0.3.1-55d2b libghc-yesod-persistent-dev-0.3.1-d48ec 2.15 libghc-yesod-auth-doc libghc-yesod-auth-prof libghc-yesod-auth-dev-0.8.1.1-293e7  403b8876fc915768044c10300e9e69c4 0.8.1.1-1 libghc-yesod-core-doc libghc-yesod-form-doc libghc-yesod-persistent-doc  64af917cff8f1826f883fc583f4559bb 0.8.1.1-1 0.8.1.1-1 libghc-yesod-core-prof-0.10.2.1-b07a0 libghc-yesod-form-prof-0.4.2-d5375 libghc-yesod-json-prof-0.3.1-55d2b libghc-yesod-persistent-prof-0.3.1-d48ec libghc-yesod-auth-prof-0.8.1.1-293e7  a17bc25b2506a968225615d547c37908 libghc-yesod-core-dev 0.10.2.1-1 libghc-yesod-routes-dev-0.0.1-13455 2.15 libghc-yesod-core-prof  7aba39c6890babb259a275971ad1910b 0.10.2.1-1 libghc-yesod-routes-doc  2988e0c769ddac18e5b60c94defeeaa2 0.10.2.1-1 0.10.2.1-1 libghc-yesod-routes-prof-0.0.1-13455  6e8e0c13007678742dc05386289525ff libghc-yesod-default-dev 0.6.1-1 2.15 libghc-yesod-default-doc libghc-yesod-default-prof libghc-yesod-default-dev-0.6.1-7f731  76153b05fe9a8aadf1ecb329f0ce3af1 0.6.1-1  d38ce4dfd5b3ce2245f2177a0cfbaeec 0.6.1-1 0.6.1-1 libghc-yesod-default-prof-0.6.1-7f731  d5a2883f87a8a9205d16d881e62d82d2 libghc-yesod-dev 0.10.1.3-2 2.15 libghc-yesod-doc libghc-yesod-prof libghc-yesod-dev-0.10.1.3-4a745  7aba39c6890babb259a275971ad1910b 0.10.1.3-2 libghc-yesod-json-doc  2988e0c769ddac18e5b60c94defeeaa2 libghc-yesod-form-dev 0.4.2-1 2.15 libghc-yesod-form-prof  7aba39c6890babb259a275971ad1910b 0.4.2-1  2988e0c769ddac18e5b60c94defeeaa2 0.4.2-1 0.4.2-1  6e8e0c13007678742dc05386289525ff libghc-yesod-json-dev 0.3.1-1       � &y x �_ �          'y Q �_ �        � (y x �_ �        �� )y x �_ �        �� *y !x �_ �        �� +y vw �_ �        U- ,y "x �_ �        a- -y �w �_ 	�        �- .y $x �_ 
�        �- /y zw �_ �    �� k  0y &x �_ �       �- 1y x �_ �        �-         �_ �        � 3y )x �_ �        � 4y *x �_ �        �� 5y �v �_ �        � 6y 	x �_ �        �U 7y -x �_ �        �- 8y /x �_ �        �-         �_ �    |�� �- :y 8y �_ �       �� ;y �w �_ �        :� <y Yv �_ �         =y 3x �_ �        �� >y 4x �_ �          ?y 6x �_ �        9� @y �w �_ �        $ Ay 7x �_ �          By Q �_ �        � Cy >x �_ �        �� Dy @x �_  �        �� Ey Bx �_ !�        �� Fy �w �_ "�        Z- Gy Cx �_ #�        b- Hy �w �_ $�        �- Iy Ex �_ %�        �-     �w �_ &�        � Ky Ix �_ '�        # Ly x �_ (�        * My !w �_ )�        �� Ny )y �_ *�        �- Oy -y �_ +�    ʐ� k  Py /y �_ ,�       �- Qy 0x �_ -�        �-         �_ .�        � Sy 2y �_ /�        � Ty 3y �_ 0�        ! Uy ,x �_ 1�        ( Vy �] �_ 2�        �U Wy .x �_ 3�        �- Xy 7y �_ 4�        �-         �_ 5�    @�� �- Zy Xy �_ 6�        [y <y �_ 7�        & \y <x �_ 8�        + ]y Iw �_ 9�        �� ^y Dy �_ :�        �-     Hy �_ ;�    u�� �- `y x �_ <�       " ay -J �_ =�        �� by w �_ >�         cy Zy �_ ?�        �� dy =y �_ @�         � ey 5x �_ A�          fy >y �_ B�        $ gy @y �_ C�        ( hy �w �_ D�        � iy �w �_ E�        , jy �v �_ F�        R ky :x �_ G�        �� ly �w �_ H�        �� my �w �_ I�        Y� ny �w �_ J�        Q( oy �v �_ K�        � py =x �_ L�        � qy By �_ M�        � ry     �_ N�        T( sy ?x �_ O�        �� ty Cy �_ P�        V( uy Ax �_ Q�        �� vy ]y �_ R�          wy �u �_ S�        Z- xy Fy �_ T�        b- yy Gy �_ U�        g- zy �w �_ V�        q- {y �w �_ W�        �- |y     �_ X�        �- }y ^y �_ Y�        �- ~y Tw �_ Z�        �- y Uw �_ [�        �-     Fx �_ \�    㑙 k  �y Oy �_ ]�       � �y Jy �_ ^�        � �y %y �_ _�         �y kw �_ `�        � �y x �_ a�        �� �y (y �_ b�        �� �y *y �_ c�        �- �y �w �_ d�        �-         �_ e�        � �y Ry �_ f�        � �y Sy �_ g�        �U �y 6y �_ h�        �-         �_ i�    U�� �- �y �y �_ j�        �y by �_ k�        $ �y fy �_ l�         �y �w �_ m�        T( �y ry �_ n�        �� �y sy �_ o�        ��     Ey �_ p�        � �y �y �_ q�        �� �y k �_ r�        � �y Kx �_ s�        J� �y ]w �_ t�        4� �y Lx �_ u�        � �y �y �_ v�        �� �y     �_ w�        �� �y k �_ x�        � �y �w �_ y�        � �y 	k �_ z�        �� �y �w �_ {�        � �y �v �_ |�        � �y �y �_ }�        �� �y �y �_ ~�        �� �y My �_ �          �y �w �_ ��        U- �y +y �_ ��        X- �y     �_ ��        �- �y Ny �_ ��    ��� k  �y �y �_ ��       �- �y     �_ ��        �-         �_ ��        � �y �y �_ ��        � �y �y �_ ��        V- �y k �_ ��        �- �y Wy �_ ��        �-         �_ ��    Q�� �- �y �y �_ ��        �y �y �_ ��        �� �y k �_ ��          �y ey �_ ��        K� �y �w �_ ��        9� �y ?y �_ ��        $ �y �y �_ ��        �� �y     �_ ��           �y "k �_ ��        ( �y gy �_ ��        � �y $k �_ ��        �� �y ky �_ ��        M( �y �v �_ ��        T( �y �y �_ ��        �� �y �y �_ ��        �� �y uy �_ ��          �y vy �_ ��        Z- �y wy �_ ��        [- �y     �_ ��        �-     |y �_ ��        � �y �y �_ ��        � �y �y �_ ��        � �y �y �_ ��    ē� k  �y �y �_ ��       �- �y     �_ ��        � �y �= �_ ��        �-         �_ ��        � �y �y �_ ��        � �y �y �_ ��        �-         �_ ��    C�� �- �y �y �_ ��        �y �y �_ ��          �y �y �_ ��        $     �y �_ ��        � �y �u �_ ��        � �y �y �_ ��        � �y gj �_ ��        � �y �y �_ ��        � �y �y �_ ��        Z �y     �_ ��        � �y �y �_ ��        � �y �w �_ ��        �� �y �v �_ ��        � �y �y �_ ��        � �y Yf �_ ��        � �y �w �_ ��        o� �y �v �_ ��        �� �y j �_ ��    ��� k  �y �y �_ ��       �- �y     �_ ��        �-         �_ ��        � �y �y �_ ��        � �y �y �_ ��        �-         �_ ��    �� �- �y �y �_ ��        �y v �_ ��         �y �y �_ ��         �y uj �_ ��          �y �y �_ ��        $ �y �y �_ ��        [ �y     �_ ��        ( �y �y �_ ��        , �y iy �_ ��        �� �y �v �_ ��        M( �y �y �_ ��        O( �y ff �_ ��        X( �y �w �_ ��        {� �y �v �_ ��        +      j �_ ��        � �y �y �_ ��        � �y �y �_ ��        �� �y �y �_ ��    i�� k  �y �y �_ ��       �- �y     �_ ��        �-         �_ ��        � �y �y �_ ��        � �y �y �_ ��        �U �y �7 �_ ��        �-         �_ ��     �� �- �y �y �_ ��         z �y �_ ��          z �y �_ ��        +      �y �_ ��        � z �y �_ ��        � z �y �_ ��        4� z �y �_ ��        � z �y �_ ��        �� z �y �_ ��        �- z     �_ ��    ��� k  	z �y �_ ��       �- 
z     �_ ��        �-         �_ ��        � z �y �_ ��        � z �y �_ ��        8� z �v �_ ��        �-         �_ ��    �� �- z z �_ ��        z �y �_ ��          z  z �_ ��        9� z �y �_ ��        $ z �y �_ ��        �� z �y �_ ��        �-         �_ ��        �Y  z �. �_ ��        � z z �_ ��        � z z �_ ��    R�� k  z z �_ ��       �U z �y �_ ��        �U     S �_ ��        � z z �_ ��        � z z �_ ��        lU z  �_ ��    ��� �U  z     �_ ��   ��� �U     z �_ ��       � "z z �_ ��        � #z z �_ ��        #� $z 
f �_  �        �� %z z �_ �        �- &z z �_ �    ֗� k  'z z �_ �       �- (z     �_ �        �-         �_ �        � *z z �_ �        � +z z �_ �        '� ,z �e �_ �        �-         �_ 	�    Z�� �- .z ,z �_ 
�        /z z �_ �          0z z �_ �        )� 1z .f �_ �        �� 2z z �_ �        �-     z �_ �    ��� lU 4z z �_ �        5z .z �_ �              /z �_ �        �f     Z �_ �        /U     R �_ �        �     � �_ �        �     � �_ �        	�     � �_ �        �     � �_ �        �     FR �_ �        �     � �_ �        �          ` �        �         ` �                 ` �        ��     � ` �        ��     �N ` �        ��     � `  �        .�     K& ` !�        /�     F& ` "�        0�     G& ` #�        8�     i& 	` $�        9�     �f 
` %�        :�     d& ` &�        B�     �& ` '�        C�     �& ` (�        D�     �& ` )�        XU     �& ` *�        pU     �5 ` +�        �U     �& ` ,�        ��     �' ` -�        c�     �. ` .�        ��     ' ` /�        ��     �' ` 0�        !�     �' ` 1�        ��     �' ` 2�        ��     ( ` 3�        1U     �= ` 4�        ��     ( ` 5�        ��     E( ` 6�        3U     >( ` 7�        ��     ?( ` 8�        ��     |( ` 9�        ��     r( ` :�        ��     s(  ` ;�              �- !` <�              �H "` =�              �- #` >�              �- $` ?�              +I %` @�              �- &` A�        -      . '` B�        d�     -= (` C�        .      . )` D�        P      }. *` E�        Q      x. +` F�        R      y. ,` G�        :     �. -` H�        ;     �. .` I�        <     �. /` J�        @     �. 0` K�        D     �. 1` L�        E     �. 2` M�        �         3` N�                  4` O�        %         5` P�        M     �. 6` Q�        N     �. 7` R�        O     �. 8` S�        R     �. 9` T�        S     �. :` U�        T     �. ;` V�        W     �. <` W�        X     �. =` X�        Y     �. >` Y�        �     s/ ?` Z�        :U     �/ @` [�        �     h/ A` \�        �     �/ B` ]�        <U     ~/ C` ^�        �     / D` _�        �     �/ E` `�        �     �/ F` a�        �     �/ G` b�        �     �/ H` c�        �     �/ I` d�        �     �/ J` e�        �     5Q K` f�        �     �/ L` g�        �     �/ M` h�        �     �/ N` i�        �     �/ O` j�        �     $0 P` k�        �     0 Q` l�        �     0 R` m�        �     40 S` n�        r     .0 T` o�        �     /0 U` p�        YU     E0 V` q�        qU     ?0 W` r�        �U     @0 X` s�        �     5 Y` t�        �     �4 Z` u�        �      5 [` v�        8)     5 \` w�        �     #5 ]` x�        �     �5 ^` y�        �     5 _` z�        �     `5 `` {�             [5 a` |�        �     r5 b` }�        �     l5 c` ~�        �     m5 d` �        �     �5 e` ��        �     ~5 f` ��        �     5 g` ��        �     �5 h` ��        �     �5 i` ��        �     �5 j` ��        �     �5 k` ��        �     �5 l` ��        �     �5 m` ��        �     �5 n` ��        �     }6 o` ��        �     �5 p` ��             �5 q` ��             �5 r` ��             $6 s` ��             6 t` ��        #     36 u` ��        %     -6 v` ��        &     .6 w` ��        )     ?6 x` ��        �     �u y` ��        *     ;6 z` ��        ZU     R6 {` ��        rU     L6 |` ��        �U     M6 }` ��        -     f6 ~` ��        .     `6 ` ��        /     a6 �` ��        2     �6 �` ��              �u �` ��        7     �6 �` ��        9     �6 �` ��        =     �6 �` ��        ?     �6 �` ��        C     �6 �` ��        D     �6 'h ��        E     �6 (h ��        [     97 )h ��        ^     �7 *h ��        _     27 +h ��        e     j7 ,h ��        h     M7 -h ��        k     a7 .h ��        l     Z7 /h ��        m     [7 0h ��        i     N7 1h ��        q     �7 2h ��             �7 3h ��        s     �7 4h ��        v     �; 5h ��        x     �7 6h ��        y     �7 7h ��        {     
< 8h ��        |     < 9h ��        }     < :h ��        ~     $< ;h ��             < <h ��        �      < =h ��        �     H< >h ��        #      B< ?h ��        �     C< @h ��        �     y< Ah ��        ��     �H Bh ��        �     s< Ch ��        �     �< Dh ��        �     �< Eh ��        �     �< Fh ��        [U     �< Gh ��        sU     7N Hh ��        �U     �< Ih ��        �     = Jh ��        >U     = Kh ��        �     �< Lh ��        �     �< Mh ��        �     �< Nh ��        �     �< Oh ��        �     �< Ph ��        �     �< Qh ��        �     �< Rh ��        �     = Sh ��        �      = Th ��        �     �< Uh ��        �     5= Vh ��        �     %= Wh ��        �     &= Xh ��        �U     u= Yh ��        �     p= Zh ��        �     �= [h ��        �     �= \h ��        �     �= ]h ��        �     &> ^h ��        @U     <> _h ��             > `h ��        BU     �= ah ��        �     > bh ��        DU     > ch ��             �= dh ��             @> eh ��        FU     8> fh ��             c> gh ��              �R hh ��        !     ]> ih ��        (     �> jh ��        )     �> kh ��        *     �> lh ��        5     xH mh ��        6     �H nh ��        7     �> oh ��        :     �H ph ��        <     �I qh ��        =     �H rh ��        _     .I sh ��        a     'I th ��        w     }I uh ��        x     wI vh ��        y     xI wh ��        z     �I xh ��        HU     �I yh ��        {     �I zh ��        ~     �I {h ��             �e |h ��        �     �I }h ��        �     �I ~h ��        �     �I h ��             sQ �h ��        �     �I �h ��        �     �I �h ��        �     �I �h ��        �     �I �h  �        �     RJ �h �        JU     ]J �h �        �     ,J �h �        LU     #J �h �        �     $J �h �        �     =J �h �        NU     5J �h �        �     6J �h �        �     NJ �h 	�        PU     FJ �h 
�        �     GJ �h �        �     J �h �        �     aJ �h �        RU     YJ �h �        �     ZJ �h �        �     �J �h �             �J �h �        �     �J �h �        �     �J �h �        ?     �J �h �        �     �J �h �        \U     �J �h �        tU     �J �h �        �U     �J �h �        mU     �L �h �        TU     K �h �        �U      K �h �        ]U     �L �h �        uU     	j �h �        �U     �L �h �        �     M �h �        t     �M �h  �        �     �L �h !�             �M �h "�             �M �h #�             �M �h $�             �M �h %�             �M �h &�        +     �M �h '�        t�     �M �h (�        -     �M �h )�        7     \N �h *�        8     XN �h +�        :         �h ,�        L     �N �h -�        M     �N �h .�        P     �N �h /�        }�     �N �h 0�        Q     �N �h 1�        R     �N �h 2�        T     �N �h 3�        k      O �h 4�        m     O �h 5�        n     O �h 6�        x     GO �h 7�        V     @O �h 8�        ~     �P �h 9�             �P �h :�        �     �P �h ;�        �     �P �h <�        �     �P �h =�        �     �P �h >�        �      Q �h ?�        �     �P �h @�        �     �P �h A�        �     9Q �h B�        �     1Q �h C�        �     2Q �h D�        �     zQ �h E�        ��     oQ �h F�        �     pQ �h G�        �     �Q �h H�        �     �Q �h I�        �     �Q �h J�        �     �Q �h K�        W�     �Q �h L�        �     �Q �h M�        �     �Q �h N�        �     �Q �h O�        �     �Q �h P�        ^U     �Q �h Q�        vU     �v �h R�        �U     �Q �h S�        �     !R �h T�        �     f �h U�        �     R �h V�        _U     cR �h W�        wU     �u �h X�        �U     _R �h Y�        �     qR �h Z�        �     lR �h [�        �     mR �h \�        �     �R �h ]�        �     �R �h ^�        �     �R �h _�        `U     �R �h `�        xU     �R �h a�        �U     �R �h b�        �     �R �h c�        Q     �R �h d�             )S �h e�        5     �j �h f�             #S �h g�        aU     =S �h h�        yU     8S �h i�        �U     9S �h j�             YS �h k�        .     PS �h l�             OS �h m�        bU     mS �h n�        zU     �u �h o�        �U     cS �h p�             �] �h q�        VU     �S �h r�             �] �h s�        ,     ^ �h t�        �     �] �h u�        -     �] �h v�        8     1^ �h w�        9     ,^ �h x�        :     -^ �h y�        =     >^ �h z�        �     �j �h {�        >     :^  i |�        N     ^ i }�        �     u^ i ~�        O     v^ i �        cU     �^ i ��        {U      i i ��        �U     �^ i ��        i     �^ i ��        j     �^ i ��        k     �^ 	i ��        dU     �^ 
i ��        |U     D_ i ��        �U     �^ i ��        eU     _ i ��        }U     _ i ��        �U     _ i ��        fU     1_ i ��        ~U     )_ i ��        �U     *_ i ��        r     F_ i ��        s     Y_ i ��        t     @_ i ��        u     [_ i ��        v     U_ i ��        w     V_ i ��        �     �_ i ��        �     �_ i ��        �     �_ i ��        �     E` i ��        �     ` i ��        �     ` i ��        �     ` i ��        �     `  i ��        �      ` !i ��        �     ` "i ��        �     ` #i ��        �     4` $i ��        �     8` %i ��        �     2` &i ��        �     O` 'i ��        �     L` (i ��        �     P` )i ��        �     J` *i ��        �     |` +i ��        t     v` ,i ��        �     w` -i ��        �     �d .i ��        �     �d /i ��        �     �d 0i ��        �     �e 1i ��        �     �e 2i ��        �     �e 3i ��        �     Tf 4i ��        �     Of 5i ��        �     Pf 6i ��        �     bf 7i ��        �U     [f 8i ��        �     \f 9i ��        �     �f :i ��        ��     zf ;i ��        �     {f <i ��        gU     �f =i ��        U     �f >i ��        �U     �f ?i ��        �     �f @i ��        �     �f Ai ��        �     �f Bi ��        �     �f Ci ��        �     �f Di ��        �     �f Ei ��             �f Fi ��             �f Gi ��             �f Hi ��        a     �f Ii ��             �f Ji ��             �f Ki ��             �f Li ��             �f Mi ��             -g Ni ��        s     �v Oi ��             (g Pi ��              >g Qi ��        !     9g Ri ��        "     :g Si ��        +     jg Ti ��        �     �j Ui ��        ,     fg Vi ��        A     $i Wi ��        B     i Xi ��        C     i Yi ��        G     7i Zi ��             1i [i ��        H     2i \i ��        iU     Wi ]i ��        �U     �y ^i ��        �U     Ei _i ��        X     �i `i ��                2.15 libghc-yesod-json-prof  7aba39c6890babb259a275971ad1910b 0.3.1-1  2988e0c769ddac18e5b60c94defeeaa2 0.3.1-1 0.3.1-1  6e8e0c13007678742dc05386289525ff libghc-yesod-persistent-dev 0.3.1-1 2.15 libghc-yesod-persistent-prof  7aba39c6890babb259a275971ad1910b 0.3.1-1  2988e0c769ddac18e5b60c94defeeaa2 0.3.1-1 0.3.1-1  6e8e0c13007678742dc05386289525ff 0.10.1.3-2 0.10.1.3-2 libghc-yesod-prof-0.10.1.3-4a745  6e8e0c13007678742dc05386289525ff libghc-yesod-routes-dev 0.0.1-1 2.15 libghc-yesod-routes-prof  15fe3a4cba02be2b0697f0ba66689f87 0.0.1-1  d803075feb59ec3869efcfcf5994103a 0.0.1-1 0.0.1-1  7a2956fba5dc7aeb9636cbb2b8d1f85a libghc-yesod-static-dev 0.10.1-1 2.15 libghc-yesod-static-doc libghc-yesod-static-prof libghc-yesod-static-dev-0.10.1-c23df  bcfcc2680f86466f569fbe5e7e1f4200 0.10.1-1  9b307ad78648126c52d62116d33df6d9 0.10.1-1 0.10.1-1 libghc-yesod-static-prof-0.10.1-c23df  35cfe99dc2822366ebf77cedf7464c72 libghc-zeromq-haskell-dev 0.8.3-1 2.15 libzmq-dev libghc-zeromq-haskell-prof  89987a270643e5e8edb42bfe0f276cdb 0.8.3-1  926150e382a4a910c5cba552f50d7f39 0.8.3-1 0.8.3-1  3561f00452cb64b2cdbf8dc44998732e libghc-zip-archive-dev 0.1.1.7-3 2.15 libghc-zip-archive-doc libghc-zip-archive-prof  45fdc12f5ac86441b6a641541c9d9dcd 0.1.1.7-3  ce781b6015389a25815a3d2a77ec122e 0.1.1.7-3 0.1.1.7-3  9acba627366fa62866802fb0a23ae4ad libghc-zlib-bindings-dev 0.0.3.2-1 2.15 libghc-zlib-bindings-doc libghc-zlib-bindings-prof libghc-zlib-bindings-dev-0.0.3.2-3d82a  ae32860433587aaae990daf8a620f556 0.0.3.2-1  b8870f43928a925a0f650017f4542f97 0.0.3.2-1 0.0.3.2-1 libghc-zlib-bindings-prof-0.0.3.2-3d82a  69e45e5999dc726727de0ca0d5d669c6 libghc-zlib-conduit-dev 0.2.0-2 2.15 libghc-zlib-conduit-doc libghc-zlib-conduit-prof  cf8c87e4243ce92a754b66d22fc12ac7 0.2.0-2  1e6b864211faad2282f79024132d2ad0 0.2.0-2 0.2.0-2  2dffa7dd3049fdb24d81cfcdb0d63b3c 0.5.3.3-1 2.15  705f4e42a7ca05c2a36b373790d76b93 0.5.3.3-1 0.5.2.0-3 0.5.2.0-3  5c7bb4481ad77b6fe7e4cb8f75aef3c0 libghc-zlib-enum-dev 0.2.1-3 2.15 libghc-zlib-enum-doc libghc-zlib-enum-prof  7e1e464c09f28cfb9c02cf5e6780c51c 0.2.1-3  b770536f1bce688696e4870809e28677 0.2.1-3 0.2.1-3  11a251608c7012f6149251fb4b351dd9 0.5.3.3-1 0.5.3.3-1  1dd871f2afd2a8979b60c5dc6e61351f libghc6-agda-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-agda-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-alut-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-alut-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-alut-prof 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-arrows-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-arrows-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-arrows-prof 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-binary-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-binary-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-binary-prof 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-binary-shared-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-binary-shared-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-binary-shared-prof 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-bzlib-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-bzlib-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-bzlib-prof 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-cairo-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-cairo-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-cairo-prof 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-cautious-file-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-cautious-file-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-cautious-file-prof 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-cgi-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-cgi-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-cgi-prof 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-colour-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-colour-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-colour-prof 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-configfile-dev 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-configfile-doc 1:6  1f317b04f78374dba7d1e14def0b7f80 libghc6-configfile-prof 1:6  1f317b04f78374dba7d1e14def0b7f80�PNG

   IHDR         ��a  iIDATxڅ��+Ca�� ���\�#��r�B�������\k���K�G�K�f��a�fk4g3ۘ���V���g������~��<�yj��#N_-� v�	�����Xn@U�V� �0(����.�p`9�B�q�C_���']���2h�.��@�<���/��ӻWR9�,�iv�^��Az��}���P���`�Jp�Х�˲)�e��}�nuz�({�	WP&8f�����+_N犴|�	�X0i��u�R��,�aA��`�<Fů�,`A#���#���=��wTr)1���X~6�"��#T�te��%�|�B�W���[��Sh�\�������W|L���<P�,�!�$��=?�w0ޓG    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              �PNG

   IHDR         ��a  �IDATxڥSIkSQ�Ft!���?ԥ+q�Bĕ�BT�ViEi��h�bK�����J1�`�I�yh�f|ik�I��ehH�m��=(T�qq���s�w�w9 ����=F�NZ��X�A0�Z�P(�9�@ ��٭�|~����M�����m���@��D6�iX,f�������Eſw:mKe|�.�la5Ja���G�W(44��:���?�p��#�����t�R�P�`�h�)����o�jsb%B�^����\n�{��P�{[�-t:�0Z���݅���FeTq&��ɵu��l3M�	*]�t���q�o��`�֙]P��v�^��
늮�������V�0��j5+9	*dj�[�����j�����1T���nn
P(P��P.�E��H4l#)�&��=�YXB��łɉa�
��0�m��(�詘U�T����k�G����:I��'��7:$�5�i���ڌ�Ë{+G��P(uL3Qϳ.d��;���ѣT2�a�M�60ēB$���.��p����?C�!�\v�Jy� ��+g�@.��K&)���v��	����������'#�j�"�Q,��zI,�ݿ����^��W*���|>�t:��D�˒Z��.WH���ŐJEWN�:�nW4��)*��mf~���5���B�R޻O�'/M}����<�\zu�����񎑑�0�_w8$_t�O�    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        �%P�h�   �����%T�h�   �����%X�h�   �����%\�h�   �p����%`�h�   �`����%d�h�   �P����%h�h�   �@����%l�h�   �0����%p�h�   � ����%t�h�   �����%x�h�   � ����%|�h�   ������%��h   ������%��h  ������%��h  ������%��h  �����%��h   �����%��h(  �����%��h0  �����%��h8  �p����%��h@  �`����%��hH  �P����%��hP  �@����%��hX  �0����%��h`  � ����%��hh  �����%��hp  � ����%��hx  ������%��h�  ������%��h�  ������%��h�  ������%��h�  �����%��h�  �����%��h�  �����%��h�  �����%��h�  �p����%��h�  �`����%��h�  �P����%��h�  �@����%��h�  �0����%��h�  � ����%��h�  �����%��h�  � ����%��h�  ������% �h   ������%�h  ������%�h  ������%�h  �����%�h   �����%�h(  ����U1���   WVS������   �|$P󫍄$�   �D$P��D$Tq�D$`(��D$d8��D$l���D$pv�D$|,�Ǆ$�   ��Ǆ$�   d�Ǆ$�      ��$�   Ǆ$�    ��$d��l����D$   �D$���$    �D$@�����D$�D$@�$�����D$P�D$�D$@�D$    �$������E�D$�D$@��$�   �MǄ$�       Ǆ$�       �T$�L$�$������$�   ��t\�@�$��D$�G����E��D$   �D$ ��$    �v����\$�$������$�   �$�k����   �e�[^_]Ë�$�   ����  �8 ��  �D$�$ ������=(� ��u�=,� ��  �$�F�����$�   �8 ��  �D$L   �D$D    �D$4    �   ��D$��$�   �$�u����4��D$    �D$���$�H����4��$�{�����$�   ����  �=(���u�5,����}  �$�|���Ǆ$�       �D$L�$�   �T$L�������  �L$L�T$L�L$DǄ$�       � �D$    �D$0��D$P��D$H�$ �������$�   �d�Ǆ$�       �4��D$H�
  ��$�   ��������T$HǄ$�       �D$    �D$=��$�����D$8�$�=���������  �$    �G������ց�  �$�5����t$�$�����D$T��$�y������D$<��  ��$�   ���  ��$�   �D$�$�������$�   ���W�����$�   �D$�$�����?����D$4   �����X�L$D��$�   �4�D$   �D$t��$    ������\$�t$�$�j�����$�   �:����D$@�$�����1��|$4 �?�����$�   �$ ��D$�����=(� ���5  �$�����   �����D$   �D$#��$    �A����\$�$������"����D$<�D$   �D$   �$W��D$�����4��$������D$���$�/������D$0��   �ǐ��D$�4��$�����Ƌ�$������Ë@�P;S�@  ��=�S��D ���    ��;�S��D �v��t9��$�D$�����C�P;Sr��D$;   �D$�����$�0����ƍ�    �C�P;S��   ��
�S��D �D$<�D$��$������D$   �$������������D$0�$������D$<�$�d����T$H�D$    �D$e��$�����D$�ËD$8�$��������  �D$8�$������$������j�����t& �D$
   �D$�����$�X����J����v �D$=   �D$�����$�8���������0����,  ��$�   �����D$   �D$���$    �����\$�$����������D$@�$�Q����g����w�����$�}����$���c�����������$�   �$�t$�D$���\$�D$�	����D$8�$������D$8    �D$<    �K��������Ƌ �$�����D$   �D$H��$    ���i�����T$,�$������������T$,�|$�\$�t$�T$��$�   �$�D$�{����D$8�$�����l����������1������<� u���1��D$   �$�`����0��"=0��D$    �D$��$������ߍ_�D���uӡ0��8    �e����&����0�4$�,����4$���������K�����$�   �$�|$�D$���t$�D$�����D$8�$�����$�D����D$8    ��������1�^����PTRh@�hХQVh ��s������U��S���= � u?�$����������9�s��    ���$�����$�9�r�� ���[]Ít& ��'    U�������t�    ��t	�$����Ð��������������<e�   �T$,1�<�D$()<>�D$ @,;:�D$$\"/[�D$(]?= t<< v8���D$�D$�D$   �$������������T$,e3   u��<Ít& 1����7�����&    UWVS��,�l$D��t�E     �D$@�$�N����D$/   �$����������   �P�  ��u9��t�D$@�$Ȧ�D$�����E �$������   ��,��[^_]Í�&    �p��v �����tN���������u��t��D$@�$��D$�:����E 말�t& ��t��D$@�$���D$�����E 녍v 1���`��$�D$��������  ����uݿ+��   �����  �D$   1��D$7��$��������   �C�ބ�u>���   ��   �T$�\$�$�������T$�E ��   ��    ���F��t����������u���   ��   �T$�\$�$h��@����T$�E �   �t& ��p��$�D$�-������  ����uݿZ��   �����  �:��
   �����  �D��   ����G  ��t�\$�$�������E �   �T$�b��$�����t$@�   �T$���   �t$@�L��   ���   1ۃ�t�m����������� ��T$�D$�D$@�$�Y����T$��uх��   ������E ��t�$��������$���D$�D$@�D$�����E �   �x����$�Q���1��i���f����   �&����T$�\$�$/x-siren, dct-length=(int)320; image/jp2; image/x-j2c, fourcc=(fourcc){ sRGB, sYUV }, fields=(int)1; image/x-jpc, fourcc=(fourcc){ sRGB, sYUV }, fields=(int)1; image/x-portable-anymap; image/x-portable-bitmap; image/x-portable-graymap; image/x-portable-pixmap; subtitle/x-kate; text/webvtt; video/mpeg, mpegversion=(int)2, systemstream=(boolean)true; video/mpeg, mpegversion=(int)4, systemstream=(boolean)false; video/mpegts, systemstream=(boolean)true, packetsize=(int){ 188, 192 }; video/x-dirac; video/x-mimic; video/x-mp4-part; video/x-ms-asf, parsed=(boolean)true; video/x-mve; video/x-qt-part; video/x-vp8; video/x-xvid
Gstreamer-Uri-Sinks: rtmfp, rtmp, rtmpe, rtmps, rtmpt, rtmpte, rtmpts
Gstreamer-Uri-Sources: cd, data, dvb, dvd, mms, mmsh, mmst, mmsu, rtmfp, rtmp, rtmpe, rtmps, rtmpt, rtmpte, rtmpts, vcd
Gstreamer-Version: 0.10
Original-Maintainer: Maintainers of GStreamer packages <pkg-gstreamer-maintainers@lists.alioth.debian.org>

Package: python-keyring
Priority: optional
Section: python
Installed-Size: 207
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: all
Version: 0.9.2-0ubuntu0.12.04.2
Depends: python2.7, python (>= 2.7.1-0ubuntu2), python (<< 2.8)
Recommends: python-crypto
Size: 39714
Description: store and access your passwords safely
 The Python keyring library provides an easy way to access the system
 keyring service (e.g Gnome-Keyring, KWallet) from Python.
 it can be used in any application that needs safe password storage.
Homepage: http://home.python-keyring.org/
Original-Maintainer: Carl Chenet <chaica@debian.org>

Package: gnome-session-common
Priority: optional
Section: gnome
Installed-Size: 296
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: all
Source: gnome-session
Version: 3.2.1-0ubuntu8
Replaces: gnome-session (<< 3.0), gnome-session-bin (<< 3.0), libgnomevfs2-common (<< 1:2.24.0-3)
Depends: dconf-gsettings-backend | gsettings-backend
Size: 41566
Description: GNOME Session Manager - common files
 The GNOME Session Manager is in charge of starting the core components
 of the GNOME desktop, and applications that should be launched at
 login time. It also features a way to save and restore currently
 running applications.
 .
 This package contains the translations, data files and startup scripts
 which are common to the GNOME and GNOME fallback sessions.
Original-Maintainer: Josselin Mouette <joss@debian.org>

Package: libarchive12
Multi-Arch: same
Priority: optional
Section: libs
Installed-Size: 642
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: i386
Source: libarchive
Version: 3.0.3-6ubuntu1
Depends: libacl1 (>= 2.2.51-5), libattr1 (>= 1:2.4.46-5), libbz2-1.0, libc6 (>= 2.7), liblzma5 (>= 5.1.1alpha+20110809), libnettle4 (>= 2.3), libxml2 (>= 2.7.4), zlib1g (>= 1:1.1.4)
Pre-Depends: multiarch-support
Size: 294356
Description: Multi-format archive and compression library (shared library)
 The libarchive library provides a flexible interface for reading and writing
 archives in various formats such as tar and cpio. libarchive also supports
 reading and writing archives compressed using various compression filters such
 as gzip and bzip2. The library is inherently stream-oriented; readers serially
 iterate through the archive, writers serially add things to the archive.
 .
 Archive formats supported are:
 .
    * tar (read and write, including GNU extensions)
    * pax (read and write, including GNU and star extensions)
    * cpio (read and write, including odc and newc variants)
    * iso9660 (read only, including Joliet and Rockridge extensions, with some
      limitations)
    * zip (read only, with some limitations, uses zlib)
    * mtree (read and write)
    * shar (write only)
    * ar (read and write, including BSD and GNU/SysV variants)
    * empty (read only; in particular, note that no other format will accept an
      empty file)
    * raw (read only)
    * xar (read only)
    * rar (read only, with some limitations)
    * 7zip (read and write, with some limitations)
 .
 Filters sup(� g 7z  A
  $u %u *� g ?z  B
  Uu Vu ,� g @z  C
  �u �u .� g Iz  D
  �u �u 0� g 4z  E
  $v %v 2� g Kz  F
  gv hv 4� g �  G
  �v �v 6� g Lz  H
  w w 8� g �  I
  Mw Nw :� g ,z  J
  �w �w <� g Mz  K
  �w �w >� g Nz  L
  Dx Ex @� g Pz  M
   y !y B� g Qz  N
  �y �y D� g Tz  O
  &z 'z F�  g �4  P
  �z �z H� !g �4  Q
  �z �z J� "g Wz  R
   { !{ L� #g �  S
  ^{ _{ N� $g Yz  T
  �{ �{ P� %g Zz  U
   | | R� &g �  V
  M| N| T� 'g �  W
  �| �| V� (g ^z  X
  '} (} X� )g �  Y
  t} u} Z� *g �  Z
  �} �} \� +g �  [
  K~ L~ ^� ,g dz  \
  �~ �~ `� -g fz  ]
  �~ �~ b� .g gz  ^
  Q R d� /g �  _
  � � f� 0g hz  `
  � � h� 1g <  a
  i� j� j� 2g �  b
  �� �� l� 3g 1  c
  ۀ ܀ n� 4g kz  d
  �� �� p� 5g lz  e
  ρ Ё r� 6g pz  f
  G� H� t� 7g qz  g
  �� �� v� 8g rz  h
  ��  x� 9g wz  i
  �� �� z� :g xz  j
  e� f� |� ;g 'A  k
  � � ~� <g �  l
  =� >� �� =g |z  m
  �� �� �� >g �y  n
   Ä �� ?g �y  o
  8� 9� �� @g �y  p
  �� �� �� Ag z  q
  � � �� Bg �  r
  :� ;� �� Cg �Y  s
  �� �� �� Dg @  t
  І ц �� Eg �z  u
  � � �� Fg �z  v
  E� F� �� Gg �z  w
  �� �� �� Hg �z  x
  Ç ć �� Ig �z  y
  n� o� �� Jg �z  z
  �� �� �� Kg /�  {
  �  � �� Lg �z  |
  }� ~� �� Mg 0�  }
  �� �� �� Ng 1�  ~
  2� 3� �� Og �  
  c� d� �� Pg 2�  �
  �� �� �� Qg 3�  �
  )� *� �� Rg 4�  �
  v� w� �� Sg 6�  �
  �� �� �� Tg 0@  �
  _� `� �� Ug 8�  �
  �� �� �� Vg :�  �
  &� '� �� Wg ;�  �
  j� k� �� Xg �G  �
  �� �� �� Yg >�  �
  5� 6� �� Zg A�  �
  x� y� �� [g   �
  �� �� �� \g C�  �
  � � �� ]g D�  �
  h� i� ¼ ^g F�  �
  �� �� ļ _g �  �
  � � Ƽ `g   �
  V� W� ȼ ag z  �
  �� �� ʼ bg H�  �
  �� �� ̼ cg #z  �
  .� /� μ dg L�  �
  q� r� м eg N�  �
  �� �� Ҽ fg M�  �
  �� �� Լ gg O�  �
  c� d� ּ hg P�  �
  �� �� ؼ ig '  �
  �� �� ڼ jg T  �
  �� �� ܼ kg D$  �
  C� D� ޼ lg F$  �
  �� �� � mg B$  �
  � � � ng d�  �
  V� W� � og g  �
  �� �� � pg f�  �
  �� �� � �l e�  �
  � � � �l _  �
  �� �� � �l g�  �
  �� �� � �l h�  �
  &� '� � �l i�  �
  c� d� � �l `  �
  �� �� �� �l j�  �
   � � �� �l �@  �
  i� j� �� �l k�  �
  �� �� �� �l l�  �
  $� %� �� �l m�  �
  w� x� �� �l n�  �
  �� ��  � �l o�  �
  U� V� � �l r�  �
  �� �� � �l s�  �
  � � � �l p�  �
  k� l� � �l t�  �
  �� �� 
� �l u�  �
  �� �� � �l �@  �
  ;> <> � �l v�  �
  X? Y? � �l w�  �
  *@ +@ � �l T�  �
  �@ �@ � �l ��  �
  �A �A � �l U�  �
  1B 2B � �l ��  �
  *C +C � �l \�  �
  �C �C � �l ��  �
  KD LD � �l V�  �
  �D �D  � �l ��  �
  �E �E "� �l HH  �
  �E �E $� �l x�  �
  "F #F &� �l W�  �
  �F �F (� �l ��  �
  �F �F *� �l ��  �
  *G +G ,� �l ��  �
  \G ]G .� �l �4  �
  �G �G 0� �l ��  �
  �G �G 2� �l ��  �
  QH RH 4� �l ��  �
  yH zH 6� �l ��  �
  �H �H 8� �l ��  �
  %I &I :� �l ��  �
  �I �I <� �l �  �
  �I �I >� �l �  �
  RJ SJ @� �l ��  �
  �J �J B� �l ��  �
  K K D� �l �  �
  AK BK F� �l ��  �
  �K �K H� �l ��  �
  �K �K J� �l ��  �
  1L 2L L� �l ��  �
  �L �L N� �l �G  �
  �L �L P� �l ��  �
  M M R� �l ��  �
  mM nM T� �l �G  �
  �M �M V� �l ��  �
  �M �M X� �l ��  �
  ZN [N Z� �l ��  �
  �N �N \� �l ��  �
  �N �N ^� �l ��  �
  O  O `� �l D  �
  �O �O b� �l ��  �
  P P d� �l �  �
  VP WP f� �l �  �
  �P �P h� �l ��  �
  �Q �Q j� �l ��  �
  � �� l� �l ��  �
  7� 8� n� �l ��  �
  �� �� p� �l ��  �
  �� ¢ r� �l #  �
  � � t� �l   �
  m� n� v� �l   �
  � � x� �l Ø  �
  9� :� z� �l �@  �
  w� x� |� �l !  �
  �� �� ~� �l Ș  �
  3� 4� �� �l ɘ  �
  �� �� �� �l ʘ  �
  K� L� �� �l ˘  �
  � �� �� �l И  �
  �� �� �� �l Ԙ  �
  3� 4� �� �l ט  �
  P� Q� �� �l ؘ  �
  �� �� �� �l ۘ  �
  ͩ Ω �� �l z  �
  � � �� �l ݘ  �
  � � �� �l �Y  �
  K� L� �� �l �  �
  �� �� �� �l �  �
  <� =� �� �l �  �
  �� �� �� �l   �
  �� �� �� �l �  �
  i� j� �� �l �  �
  �� �� �� �l �  �
  � � �� �l �  �
  �� �� �� �l �     ή Ϯ �� �l ��    B� C� �� �l �    �� �� �� �l �    Я ѯ �� �l �    A� B� �� �l ߘ    �� �� �� �l �    �� �� �� �l �    <� =� �� �l ��    � �� �� �l ��  	  ұ ӱ �� �l ܘ  
  � � �� �l �Y    p� q� �� �l ޘ    j� k� �� �l 1    � � ½ �l �    A� B� Ľ �l 
�    t� u� ƽ �l B    ӵ Ե Ƚ �l �    � � ʽ �l 3z    ?� @� ̽ �l I    }� ~� ν �l �    �� �� н �l |    �� �� ҽ �l �    7� 8� Խ  m �    �� �� ֽ m �    �� �� ؽ m �    � � ڽ m �    2� 3� ܽ m �    �� �� ޽ m �    ĸ Ÿ � m x    ��  � � m �y    V� W� � m �    �� �� � 	m �     � � � 
m �  !  S� T� � m �  "  � � � m k  #  ^� _� � � �y  $  �� �� � m )�  %  ��  � � m b  &  b� c� �� � /  '  �� �� �� m /�  (  
� � �� m 2�  )  T� U� �� � 3�  *  �� �� �� m 4�  +  � � �� m �@  ,  [� \�  � m �@  -  ˿ ̿ � m 5�  .  <� =� � m 7�  /  � � � m �  0  �� �� � m >�  1  �� �� 
� m @�  2  � � � m I�  3  o� p� � m �G  4  �� �� � m L�  5  "� #� � m N�  6  � � � m ,Z  7  � � � m �#  8    � m �#  9  T U �  m P�  :  � � � !m Q�  ;  � � � "m tS  <  B C  � #m R�  =  � � "� $m S�  >     $� %m T�  ?  th uh &� &m �5  @  �h �h (� 'm U�  A  i i *� (m �?  B  li mi ,� )m V�  C  �i �i .� *m �  D  $j %j 0� +m X�  E  �j �j 2� ,m Y�  F  �j �j 4� -m W�  G  5k 6k 6� .m Z�  H  �k �k 8� /m �?  I  �k �k :� 0m [�  J  al bl <� 1m �  K  �l �l >� 2m _�  L  	m 
m @� 3m `�  M  Wm Xm B� 4m b�  N  �m �m D� 5m   O  �m �m F� 6m �  P  n n H� 7m �5  Q  >n ?n J� 8m ��  R  �n �n L� 9m e�  S  �n �n N� :m D  T  (o )o P� ;m f�  U  Yo Zo R� <m g�  V  �o �o T� =m i�  W  �o �o V� >m �@  X  
p p X� ?m j�  Y  Op Pp Z� @m k�  Z  ~p p \� Am �@  [  �p �p ^� Bm �@  \  q q `� Cm �  ]  Nq Oq b� Dm �  ^  �q �q d� Em E@  _  �q �q f� Fm n�  `  er fr h� Gm �  a  �r �r j� Hm s�  b  	s 
s l� Im �  c  Ms Ns n� Jm �  d  �s �s p� Km JZ  e  �s �s r� Lm w�  f  @t At t� Mm x�  g  �t �t v� Nm z�  h  �t �t x� Om }�  i  +u ,u z� Pm �  j  bu cu |� Qm F@  k  �u �u ~� Rm ��  l  #v $v �� Sm G  m  cv dv �� Tm ��  n  �v �v �� Um ��  o  �w �w �� Vm ��  p  �w �w �� Wm ��  q  6x 7x �� Xm ��  r  lx mx �� Ym �  s  �x �x �� Zm ��  t  ey fy �� [m �  u  �y �y �� \m ��  v  z z �� ]m ��  w  Mz Nz �� ^m ��  x  �z �z �� _m ��  y  �z �z �� `m ��  z  +{ ,{ �� am ��  {  f{ g{ �� bm ��  |   | | �� cm ��  }  I| J| �� dm ��  ~  �| �| �� em ��    �| �| �� fm �S  �  #} $} �� gm ��  �  �} �} �� hm ��  �  �} �} �� im �.  �  ~ ~ �� jm ��  �  c~ d~ �� km ��  �  �~ �~ �� lm 1  �  � � �� mm �4  �  � � �� nm ��  �  -� .� �� om ��  �  8� 9� �� pm ��  �  �� �� �� qm ��  �  � � �� rm �4  �  A� B� �� sm ��  �  �� � ¾ tm ��  �  !� "� ľ um ��  �  �� �� ƾ vm �4  �  ك ڃ Ⱦ wm   �  b� c� ʾ xm Ù  �  �� �� ̾ ym ę  �  
� � ξ zm Ǚ  �  K� L� о {m 3  �  �� �� Ҿ |m �PNG

   IHDR         ��a   sBIT|d�   tEXtSoftware www.inkscape.org��<  �IDAT8�u�=OQ������J#F���h�$��AK[;KL���/$�,MHIeI�hde�Xff��X��b�p��<9���{M ;ɲ�劤 �"��U���^���`��Z�f���Q�B*�g|���4qI�^*����4���bd��0C��T�>Y`��w���]�������� ?�=�='��u	O����d9�����ͪ u�g��b!��[��'멗�J,)5�WB�"?G�P��)	���"; ?B�*;ì�\� ă� ���M
�ây}&d��9�G寡�F��t	�Q�����9�ޏ�.�pz1@�onܼ���6^�f!01}����������(���r�al��ܽ1��0������O��Yx��?~͝��O��2k^v0e�A���*���u1FV�������?�0(��I� ���	@?�N��(*]f[k�E|��`FnƦ�#��*8y0�\<D��6�`��cf���b,    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          udio, raversion=(int){ 2, 1, 8 }; audio/x-qdm2; audio/x-shorten; audio/x-sipro; audio/x-true-hd; audio/x-truespeech; audio/x-tta; audio/x-ttafile; audio/x-twin-vq; audio/x-vnd.sony.atrac1; audio/x-vnd.sony.atrac3; audio/x-wma, wmaversion=(int){ 2, 1, 3 }; audio/x-wms; image/bmp; image/jpeg; image/pbm; image/png; image/ppm; image/tiff; image/x-pcx; image/x-portable-anymap; image/x-portable-graymap; image/x-sgi; image/x-sun-raster; image/x-tga; unknown/unknown; video/mpeg, mpegversion=(int){ 4, [ 1, 2 ] }, systemstream=(boolean)false; video/sp5x; video/x-3ivx; video/x-4xm; video/x-aasc; video/x-amv; video/x-apple-video; video/x-asus, asusversion=(int){ 2, 1 }; video/x-ati-vcr, vcrversion=(int)1; video/x-camstudio; video/x-camtasia; video/x-cinepak; video/x-cirrus-logic-accupak; video/x-compressed-yuv; video/x-divx, divxversion=(int){ 3, [ 4, 5 ] }; video/x-dnxhd; video/x-dv, systemstream=(boolean)false; video/x-ffv, ffvversion=(int)1; video/x-flash-screen; video/x-flash-video, flvversion=(int)1; video/x-fraps; video/x-gst_ff-8bps; video/x-gst_ff-avs; video/x-gst_ff-cavs; video/x-gst_ff-ffvhuff; video/x-gst_ff-flic; video/x-gst_ff-idcinvideo; video/x-gst_ff-interplayvideo; video/x-gst_ff-mdec; video/x-gst_ff-mmvideo; video/x-gst_ff-pgmyuv; video/x-gst_ff-qpeg; video/x-gst_ff-roqvideo; video/x-gst_ff-snow; video/x-gst_ff-vmdvideo; video/x-gst_ff-vqavideo; video/x-gst_ff-wnv1; video/x-gst_ff-xl; video/x-h261; video/x-h263, variant=(string)itu; video/x-h264; video/x-huffyuv; video/x-indeo, indeoversion=(int){ 5, 3, 2 }; video/x-intel-h263, variant=(string)intel; video/x-kmvc; video/x-lagarith; video/x-loco; video/x-mimic; video/x-mjpeg-b; video/x-msmpeg, msmpegversion=(int){ 43, 42, 41 }; video/x-msvideocodec, msvideoversion=(int)1; video/x-mszh; video/x-nsv; video/x-nuv; video/x-pn-realvideo, systemstream=(boolean)false, rmversion=(int){ 4, 3, 2, 1 }; video/x-qdrw; video/x-rle, layout=(string){ quicktime, microsoft }; video/x-smc; video/x-svq, svqversion=(int){ 3, 1 }; video/x-truemotion, trueversion=(int){ 2, 1 }; video/x-ultimotion; video/x-vmnc; video/x-vp3; video/x-vp5; video/x-vp6; video/x-vp6-alpha; video/x-vp6-flash; video/x-vp8; video/x-wmv, wmvversion=(int){ 3, 2, 1 }; video/x-xan, wcversion=(int){ 4, 3 }; video/x-xvid; video/x-zlib; video/x-zmbv
Gstreamer-Elements: ffaudioresample, ffdec_4xm, ffdec_8bps, ffdec_8svx_exp, ffdec_8svx_fib, ffdec_FRWU, ffdec_aac, ffdec_aac_latm, ffdec_aasc, ffdec_ac3, ffdec_adpcm_4xm, ffdec_adpcm_adx, ffdec_adpcm_ct, ffdec_adpcm_ea, ffdec_adpcm_ea_maxis_xa, ffdec_adpcm_ea_r1, ffdec_adpcm_ea_r2, ffdec_adpcm_ea_r3, ffdec_adpcm_ea_xas, ffdec_adpcm_ima_amv, ffdec_adpcm_ima_dk3, ffdec_adpcm_ima_dk4, ffdec_adpcm_ima_ea_eacs, ffdec_adpcm_ima_ea_sead, ffdec_adpcm_ima_iss, ffdec_adpcm_ima_qt, ffdec_adpcm_ima_smjpeg, ffdec_adpcm_ima_wav, ffdec_adpcm_ima_ws, ffdec_adpcm_ms, ffdec_adpcm_sbpro_2, ffdec_adpcm_sbpro_3, ffdec_adpcm_sbpro_4, ffdec_adpcm_swf, ffdec_adpcm_thp, ffdec_adpcm_xa, ffdec_adpcm_yamaha, ffdec_alac, ffdec_als, ffdec_amrnb, ffdec_amrwb, ffdec_amv, ffdec_anm, ffdec_ansi, ffdec_ape, ffdec_asv1, ffdec_asv2, ffdec_atrac1, ffdec_atrac3, ffdec_aura, ffdec_aura2, ffdec_avs, ffdec_bethsoftvid, ffdec_bfi, ffdec_binkaudio_dct, ffdec_binkaudio_rdft, ffdec_binkvideo, ffdec_bmp, ffdec_c93, ffdec_camstudio, ffdec_camtasia, ffdec_cavs, ffdec_cdgraphics, ffdec_cinepak, ffdec_cljr, ffdec_cook, ffdec_cyuv, ffdec_dca, ffdec_dfa, ffdec_dnxhd, ffdec_dpx, ffdec_dsicinaudio, ffdec_dsicinvideo, ffdec_dvvideo, ffdec_dxa, ffdec_eac3, ffdec_eacmv, ffdec_eamad, ffdec_eatgq, ffdec_eatgv, ffdec_eatqi, ffdec_escape124, ffdec_ffv1, ffdec_ffvhuff, ffdec_flac, ffdec_flashsv, ffdec_flic, ffdec_flv, ffdec_fraps, ffdec_g722, ffdec_g726, ffdec_gsm, ffdec_gsm_ms, ffdec_h261, ffdec_h263, ffdec_h263i, ffdec_h264, ffdec_huffyuv, ffdec_idcinvideo, ffdec_iff_byterun1, ffdec_iff_ilbm, ffdec_imc, ffdec_indeo2, ffdec_indeo3, ffdec_indeo5, ffdec_interplay_dpcm, ffdec_interplayvideo, ffdec_jpegls, ffdec_jv, ffdec_kgv1, ffdec_kmvc, ffdec_lagarith, ffdec_loco, ffdec_mace3, ffdec_mace6, ffdec_mdec, ffdec_mimic, ffdec_mjpeg, ffdec_mjp����9    C0r $   `  ����y    C0I�N���^����     �  ���6    C0o ,   �  8���O    A�C�F�P
�A�A�A 4   �  X����    A�A�C@�
A�A�BTA�A�8      ���Y    A�C�F�~
�A�A�FA�F�A� ,   D  $���5   C�G�F�F�F�-
����A   @   t  4���-   A�A�A�A�H�M
C�A�A�A�A      �   ���^    C0Z(   �  h���G   C@F�H�L��^
����E       �  ����P    CI�G�f
��G  $      ����j   C0J�O���g
����E,   H   ���y    A�C�C0f
C�A�A       x  P����    C H�[��h��� ,   �  ����   A�BV����
�A�A�A�A8   �  ����a    A�A�A�A�N0JA�A�A�A�     ����            ����                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ����    ����                 [     �     �     �   �����o��   ��   ��
   ;                  ��               �   �            ���o�����o   ���o؎                                                    �        ELF              T�4   |c      4   	 (      4   4�4�               T  T�T�                    � ��R  �R           �^  ����l  (           _  ���   �            h  h�h�D   D         P�td�M  �����   �         Q�td                          R�td�^  ����          /lib/ld-linux.so.2           GNU                       GNU a�����z��\+5	��hQ�   ^         �   �@    ^   _   `   b       d   e   f   g   h                                   ����K��F>�#��ʡz�.KCE������qXmV���|9�                �             q             �             b             D             �                          >              �             �             �             y             #                                         �               �               M             �             �             �              �             �             �             �             U             9             �             �                          �                                       3             �             �              �             �             W             T             �             �             U              9             G              _             �             �                           �             s             x             �             2             �             /             �             �             [             �                                       M             )             )              �             �             �             �             +             h             �             o             �              �                           �             n              �             �             �             �              �              �             �              5                          �             �                          �                                        �   �      �  ��     �   �       c   �       y   ��     �  h�     ���  ��        h�     ��7   ��         $�     ���  ��      libgdk_pixbuf-2.0.so.0 g_build_filename g_list_append g_free g_unlink g_list_length g_assertion_message_expr g_strerror g_ascii_table __gmon_start__ g_malloc_n g_strfreev g_log _Jv_RegisterClasses g_malloc0 g_strdup g_strndup g_error_free gdk_pixdata_deserialize gdk_pixdata_from_pixbuf gdk_pixbuf_new_from_file gdk_pixdata_serialize libgobject-2.0.so.0 g_str_equal g_hash_table_lookup g_list_prepend g_hash_table_new g_hash_table_insert g_hash_table_destroy g_str_hash g_malloc0_n g_type_init libglib-2.0.so.0 g_key_file_get_string g_hash_table_foreach_remove g_mapped_file_get_contents g_mapped_file_new g_mapped_file_get_length g_hash_table_size g_printf g_key_file_free g_spaced_primes_closest g_key_file_get_locale_string g_list_free_full g_dir_close g_option_context_parse g_dir_open g_file_test g_dir_read_name g_option_context_add_main_entries g_key_file_get_integer_list g_utf8_validate g_option_context_new g_strv_length g_strsplit g_get_prgname g_get_charset g_str_has_suffix g_mapped_file_unref g_file_get_contents g_set_printerr_handler g_key_file_set_list_separator g_printerr g_path_get_dirname g_file_read_link g_key_file_load_from_file g_convert_with_fallback g_str_has_prefix g_path_is_absolute g_key_file_get_keys g_key_file_new libc.so.6 _IO_stdin_used fflush strcpy exit setlocale strrchr dcgettext ftell fsync bind_textdomain_codeset rewind strtol strlen __errno_location fseek open64 fputs fclose __xstat64 stderr fileno fwrite rename ftw64 strchr utime fdopen bindtextdomain strcmp __libc_start_main _fini _edata __bss_start _end GLIBC_2.2 GLIBC_2.1 GLIBC_2.0                                                                                                                                                                                  �         ii        ii        �PNG

   IHDR         ��a  jIDATxڍ��K�aƣ�O�DR"}�4�&~H��b�9D�-�tn+�/I1K�^|�h��6���%�&*��>�t{6�3����� �>������\�~�9�uF]����c~n��,��tO��{(`��:�:b�x�T�#Ţh�h�Lc��A�s������VHp���������F�YYz�(�ak+�Db̈��pXD0���aH֠�� ��XX�������gm���}X]]A�P�K֠Zx,Q���$����9����S�Q�T=��x��azz���M\OM���DY�R�
o�h��h ��MN�	��^(�D
������j���
Uy�f�������e��J�j��^w�H�'�­�֖�榈9�j�:(KK�+�����l;[��7;:�p��V{���O&���M�m�!�:	�����(�EsS��Qՙ���=�(�cee���������i��A�BAll�PW�z�� ǋ�EQ*��mp:?��q`|܅�	7���bt�s��E�)�d^�_pS�ν���.�����'v�Y�=������A~�b;c��w�n��L��Cp��12b�GG��)����a��4�r��e���O^�|1�{�Z�`���Y'�����4b�    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             d  x����   �����   �����   ����D  �����  X����  Z����         zR |�         T���p   FJtx ?;*2$"   @   ����y    C@h
E <   \   D����   A�A�A�A�C@k
C�A�A�A�H T   �   �����   A�A�A�C�Ep}
A�A�A�A�D�
A�A�A�A�A     �   l���-    A�C cA�,     �����   A�DU���d
�A�A�A�A8   D  L���a    A�A�A�A�N0JA�A�A�A�   �  ����          �  n���                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ����    ����                 �     |�   |����o��   ؆   ��
   �                  ��   0           L�   D�            ���o����o   ���of�                                                     �        �PNG

   IHDR         ��a  �IDATxڍ�KLQ�G(�Jb��
Ec�Q^\�hT��ҵF%D����2��PY
FAc�iZ�)--)� P�@���C��3�������ON��wι9����e��O�� J��3"�:7�ӵ��� 	Ī.���� ���I	�~�@<���e0:1�8�`�aϹ+���(��z�f��!~D"��a�
�>���o��K��T�� B5����`]^ĤA��"�R�2	�2Y�w�=�o�U&	"�Z�F�%�'J��CMb�����p��"��`a�6]5l�u��"�o6cq��MJ\ �bk�.h=
�3I0�!�1��s��`,�0�5�}G�Y�Dp�6x���Ts��G jZ�fU�$��k��@���W��^�k=��O���1̯G �9��V`3�ǎ�[3���a�~?��Е�G9f����s:�L�i�nO��lK�p��	���4ak�!Xs/zr��c|���9"{�p�W�k�����G�ݙ2;��~PS��[�G�;��,� ��
d�Ip�`Mu�ɖ�9z&�Z���)6���0Y��%&[���O���oA��c�b9T��@Ȳ<	8X ���,{��_��(̩!��$蕱k�*�&���q9��p�W0O�E�~֚���ĳ�4�[Iw��� ���|"�F��x�2a��^v)S�[�����[�+��R��    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              �PNG

   IHDR         ��a  IDATxڝ��O�a��>�՟��_����Jf���L�dT���e��Qk��� {��|Z�k��,͜���ẺA�l�]ݰŲ̩~g��s]�9��PA�v�F���{t����(���c�}���*�7�B��셱��*퓡��g�[�S�h�����~���[�;�"���hM$p��%f��O��U�N9��,���ZI�oBSx|,�47���F,-�Gcg,�1~%�p<�6��Mh�ނF���ץr��:��&�Q�(j����.C\�`"8A��D �AJ8�T,�v���Hg���v�q�y�͌��'�*�@ݥ���/������0�`��A��^�΋ Wʰ�J��2��_]�`2���j���q��."�� �ރN���"�T5��%�����*�BG�9�P���k�E��>V ����<vc:>���e���}����vz������c��)������}��� WȤ�.�a��/(m����ngl��{����Z��p�����ʿ�/�a�N}�z���� 4s:��M    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            �PNG

   IHDR         ��a  �IDATxڍS[HTQ=3&�5�QRPaZIH�Ei�a!�BzA�W�E�QAA��)jR�\CGS�iAF��;Nh��93������\g�j���d>Z�a�}�^�yX"4����ri2���w�l��k*cxga�		$3󌸮k�ꌠ,�sK�>b�%���-K�u�
�!�3E����!���e;��:
��*p�>�j4���6��ƺokᡫ�Uډȃh���"�V�cځ�{�B2�+�UЅ�4�&=�HO�a�a�]٘�j ���n9�3:5So)[�\�(��Т�PFo��}rs��)/%�{;3yQ�x���v�)��T7�������wW*�K�zܦ�j
�I�&�e��̺��QS'L��#�#%'2p��R�s�dC�VN5�Y.��ę^����'Y�&�ވp�(�۹p=nS�/Q�#��j�ڕQ*��xy��P���:M����J_>�r�z�F�[2au��Kٚ�貙=��_P��8u�&"�;������,bJ+ܶcaJ�d&u�����sJ��e9��J!"?�<�����6L*]�E]�۟=����dA���C��#~Ա�T'C5��x��A�D8:����S#��y����]�����tD6��i�Y����bRUs��@K�*��,(�¶���h���o����Lo�I	�}�4��X����/r��$Y6�    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    �PNG

   IHDR         ��a  �IDATxڍ�]K�a ��?PR}th�ה@2+*G��H�i-�V(6��r��-�7�Vk~l.���f�("e��ë�}d����s=�}��� �a��<1x�c���hu�gyu��j��J��J �i���Ǘ�~FS͂��N�@s�Q$�T/h`����>��(f���5��O'�h�go�v�KS�޵�v��/J߭���Ԯ���E"�`*�+����Xf�%c��D���A8u�wKm�]4P'���N������5q��:�c���+qǫ�g�Ž���P�ʥ�"�/��}8Ao���
ѓ8���^�˜��uԮr��F��͵L�5��m�'\*y��Ӎ������Ʈ♸L��*�o�V���KmWњo�&ݡ���^����-��un�3V�#�Q�+R�p��]���L�#���U�}�i3�a���$]�r��>PѾ�Ρ2��s�U	��c�}��mc�Ը�\TW(�a�X�K��    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     �PNG

   IHDR         (-S  DPLTE��� J� J� J� J� J�"L�#M�!K��))�))"M�#N�!L�#N�!K�!L�"L�#M��))�))!K�"L�!K�%O�&O�)R�*R�Ms�V|�f��p��w��x���)) J�+H�4e�5f�9j�:k�=l�Cs�Fu�Gw�Hw�Ix�Ly�M|�R|�R��T��U~�W��W��X��Z��Z��[��\��^��^��`��d��f��h��i��j��l��l��m��p��p��r��t��v��w��x��{��|��|��~��~�̀�Ņ�Ǉ�ˊ�ϊ�Ӌ�Ӎ�ΐ�͒�Г�җ�ә�Ԛ�֞�ן�Ԡ�آ�פ�ڥ�ئ���S\�))�66��������Uh   #tRNS 79=vv~����������������������������l�   �IDATx�=��WAQ�w=dL�Ǣ�E)�(sh.��z����������s$��t�.Kz"����p5l�vc�����r�%l�`1�T9n��+N�����q�s����<���t���
����Q������XG��v�@��j@��&�`
Ϛ�K�*�J������R�1�xT/S�~��3����,�h�q>�;� ]���C�m�e��1'���    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      �PNG

   IHDR         Oc#"   gAMA  ���a   sRGB ���    cHRM  z&  ��  �   ��  u0  �`  :�  p��Q<   	pHYs  �  ��oy�   	vpAg       \ƭ�   bKGD � � �����  �IDAT��iT������dYe�Q @��R������Q�W�hH!�^MKEЪ �K�*j�y����D�
�\������̔>�=��?1?ؚN�bK��T���T���SQd4��_:��yl97�y\W�y\20�[Άc�1��yl��m��d�� s��!����g�?�<�ԩ�,����,�{�����lٻ�o�H5C3��2�(�p)�?��}���� 	��&��U�r� ��K⤐	j�c���\�n��Z:�W:n_�Sm>A�XO��ޱ$�a���g��(ߤ��+�|۝ֽ�f��ׯy3�|Ӯ�
 ~��	@�/|.��Ix�)= 0��"P �\��D�%Q�k�`g�u=�⏍k$���/��Qy�G�c�ۻ����bҴ�&�hm�/g��E���>q�bxUk60R��l�N5ll�ƚ�<�)�ǧ� �C���j6��ɀ#�~�^���oD�.�d%������f����3����gJ�i/����w���<L,�~��cmy��>��_���#���q����l�R���<h��=�m��h���LE��� ���B%��� Q���$� �Xϵ���o�M�t?T�t� Q#�[P�q��	�QG֔�3H��j�� 'a�� �b���@�����Ț�����"�~,�$� �+R��Bk>#�ӑ:w`���fD�Lf��M�FTu߀�u�ǿݲ�?����7�)�YHY�t1���, $RX���ob�c�n�e)��*d���#��0���ܤ�i�s�`��Y b80G�-�Q�>ld���MgL(�6(�fȗ�jN�/�o5q/�;��F���SO��2T>/�ܡ��ٓ	���&��: �[�x6 �{�Y��Hd� )$�d�4��� ��?�_xE�z\ �U�� �'��	Q]],���Q��h݇�g,ˌY���(N�rW�#�4mT4�|���y@��~�c %��	0
{���*{���M�,u�q�5@$N�Y"(M}N��"����_��XM֓��n��A���g�O��+E� ���Dc��9�账����Ai^i� ��fp��_z����>�����J�K}�R	�,�B&�f�x��=GgD��!�9����Z�Y`��mK��2j����_�c �P�o,Y�i��E �������ҿ����N]�7ͥ��&�#�$`~�~f{fg*�c}�'I��%��� �I�o���>�NY�ݒ������81Qչ�60{��ni�j�o�*�@Tނ4�&�c�f9П:YD���۲i,�ܬ�M�:���A	OƼjA��k�綷d�����Cf�W�#/����0�����d���p��.�ji�R�)��Ox���'��I3}�]�a
�2ybD�I�v3� �b�j�0�gm�X{�����Z�ku�͹����	��-�{z+V �"��\�,��W{<�m	�X�¯�����x��4��a 
�K�f�\@o����,���2��pٔ6����C���L�x�z�6P��c��ի��#���2Ö}�\}xw��k��t���ӚJ��MdB$K:nڬ��y�n6�eѮ�Yn�����,Ы�eb�E��������8N��d0��    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  �PNG

   IHDR         ��a  �IDATxڍ��KSa�A�haօD��^y]4ȋJ��^l�B,$���L���T��sd�f9͡×�tf�.Cs��[�Ӝ��ts6��ٷsN�dv�����9�y��� त^���Kb�~�pDb��/��B1��w�:ӏ0o�{Ս�k��[Zôs��o�YXa�LO�R�_�yI;$�F��Y��K�����A(5]��(�H"a�z�Q���o`�Df�s�]����PEׂ�u�+�����F_��#�v;�������ALL9�&���Ű}�^j[GP��:=�mf��F���l����'xA}ҲT"��yۄ���������Ն:|����Ì��,h��x��%dw2X lh�� ��qT��C��5r���L!���-�mX���ɂPD���h`�ち}� �=zuN2L��(��"].A~V�%"���y�:�[<��C���M	�����}ֶ3�kJDW]�B%=�0���]_]h�|�cz* �Ճ�'w:���X�O�{�\�"O�/0�afv��Ew����i��$���8��X�Ec��E���p��IME}�-l:�c@��DBa }'id��梘���!o!vV��$�p^��'.�6.��##���EQ�O�Q���c�Zu��Ru�W�y�W���H���/�Ͷ��*�    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              �PNG

   IHDR         ��a  IDATxڥ��KSa��HB��y�x!	B����<iR��f$�娘9N�D�i2��+SWXR��2-l�Ɉ�Sr��l;۾��a)�����y�����>: :��ha��|.t����<�	F.�/4N��vD�#X\Y÷�+�\�?����R&N�yZ2�s��Hu�(1w`�����	-���K�_�C�$z(/�Ũh�O�$4T7�TQ	ߔ�T�Ē��8}�K`]M�ǯ�84ra0�%#�×9?L�eM���������k�-�8g{���Op��'�"�N�嘤�L����k���8�Ū�`pt.�G�{<��M�}U���]r��L;Hw7Y{@*��g�晄����`��eWzQz��O�G!ۜ%؀'���(�� ���Z����Tֻ�\�FQU+�e�*��[����oQ+{q��Pۃ#f'w`��	;��[8������;���7���7�A ����r�0���t#����n�`��	���Y@cVv��?�ɋ����F��'��{� �|��iR_D� �s�'d��    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           �PNG

   IHDR         ��a  \IDATxڍ��OSQ��h���(b�:/ݙ�q)H� KE0A!� &%��Op��t�E&�E!B[���<��c�Q�`��{	-?�;�.���=��=�s	�u8M$��mwd�D�k�N�+\��������:�wZH�&�L��㣡s�=} �_Oc�U����(p6�Ի�<:�yV�Y7��G����`;ܐ�T

\fR1ݫ�q���`��I�A,���×O�d%�W���B&��t��F}����	���ˁ�U��'�������ͤ��cB��i���
�=߽J��E��Q��ZWF��3=~�#=�m�,
Z���hؗ�^$�ɕ�����S�����c`l���`�Y��f�K_*�9�0lK�&�`�(���桸i��u�/w�8�~Fņ�{b�|�����P��?wGsQl�F�6c��F�_b��J,�Pb�պ�<\�MA�;�U/2�kh��Ė�UD���i������v8��
�|���A%j�p�,Y�D�?L�DTy�=��3����T�:��w%�f&�̒��)��4��Pe�vy��C	��d���w9�n��s�@�[�\���$�B�Q��J�5P����x��ؔo���    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           �PNG

   IHDR         ��a  �IDATx�mS[HQ�5Mz�BA���(3���"�e۪/�Jz((T��.�+J��a�jf�%7I�������]�,�l%vf�̙��τeс�s8��}���gF���R��7�!���V.H7��i#r~j�b�͟N�%�x��%';+��0?E`~���y��GU��B�Ք�>��Cv������^�~��2�b��U0� ���_qi$"�d���ѷ���O*	�J��l>�d�Fg�/��.��sU*�\Q}c�����n:��!���1�Wu���N�Ao;��ѣ��fRu�>q�$�P)��f�f'����`�Z`��0��a}~��q��}0�G�~)��vIo��W�]��6�a���C��s� �z�!��N�� ��F��1I�K��P'�r��3��Bo�o�	���������^���˲m�3u�ߕo��R���|��n��Ss�% ��ָW��q�f8S�Oc�B\��B���rn!Ԫ�dcx���vX_m��4o���9P��Aܨb�{�a��"$KgA)_k%�uP/��g�V�ݺR� �^!&n��R�xƬH�<Ոܱ-�|PjVۉʅ�dm	����:0"w1P4_<�Z�C"��ъM�!7B�^��)��@�x&�%�����Ce��b̳E%���r:]��*s���`mG�E�i��8�w"6Z����0qҦ��x�s�7�Pz�a���&�q�UD�)���~�LJ��	���]@L[Lx�7�'����iT�    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               �PNG

   IHDR         ��a  KIDATxڥ��KSqǯӉN��4ii����)��;�?&t�]�fd
ٛa���T40�,s��=on�tꮺ�E/R��};�
�z����9�s�W �_��h�Ym�$��6iE����`6��={>�-��������ؓ��r�(@�[�a�1$��M��#����1v�>"	b���l�h<?,��n��ڤW^œ�?Hbqi����u�σ�kN�77���+Ky��e� ��	�5��'ȝ����)/�mG�L�"�"�I0A�u���l��߯���\GG�m�
�s�X���@����m���V�� ���N���45��`ȏ��P[�d[�81�hn������@�I�s�J�maýΥ(�ƞ��\g'Ԇ(�����҂y��Ǥ �	�$]�˾�d�eȌ��7��km�Z_���|��\1WW�G�)A�,��Q�+Y�==Ȫ*���5��:��� �������K*���E���P0-�hc#Bt��ݎ�Ʉ ��wz=>�XMQ ;�C�;W��୪�]eex_Q��3�pƏ����:ݙ��$'
�`��Y�����vm�/���
�_�͢����    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            [Icon Data]
DisplayName=Uploading
DisplayName[ast]=Xubiendo
DisplayName[ca]=S'està pujant
DisplayName[da]=Sender
DisplayName[de]=Hochladen
DisplayName[el]=Γίνεται αποστολή
DisplayName[es]=Subiendo
DisplayName[fi]=Lähetetään
DisplayName[fr]=Téléversement
DisplayName[hr]=Slanje
DisplayName[hu]=Feltöltés
DisplayName[it]=Caricamento in corso
DisplayName[ja]=アップロード中
DisplayName[lv]=Augšupielādē
DisplayName[ms]=Sedang Dimuatnaik
DisplayName[nl]=Bezig met uploaden
DisplayName[pt]=A enviar
DisplayName[pt_BR]=Enviando
DisplayName[ro]=Se încarcă
DisplayName[ru]=Выгрузка
DisplayName[sk]=Nahráva sa
DisplayName[sv]=Skickar upp
DisplayName[th]=การอัปโหลด
DisplayName[uk]=Відвантаження
DisplayName[zh_CN]=上传中

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       �PNG

   IHDR         ��a  �IDATxڥS]HSav�ԦR�B]��B�Q�dօBR(b�Db��I�Q�$���4��4�@�Bw��I�V�,5������ٟ�yzO��z��Á�y�����}O���e��5J�8#K��IN�2eH�%�#N��v�P�ꊯ�(R���������Xv+�]h���c!�<�DuE����ca8��o��6�&���N�nBכ�#�����!moFdV[F�2���ӿ"�� ��y��[����'��I[�=ծ�I���NL~�>Џ�[��*꘺��|J����~k����֕�%e2\3U����Ƿ�P�ӝ(� u��Q�s�u�P	��	�X/�O���b_N�o��d6l#�^g�����)4��n����	O��QOT2QX0�%��C�p��&m<�4�/�A\;�D0�6Z��v
�g�/�c}閕'䌽�
q�,�^Ɯ�8��D��&��(R��:�S,�!�)�:F��5��1��3#�u�84ڷ5`3�S�m��Bt_�s�Z�``u
��4��炈�\�O	|�-6 �|@��ѥ[��N�w�C�ێѾ� 5.^��j���~?��͕�N�ϸ�\��{6�Gt�<�bFuD��'��r�Z����"��A�
B��k�캃��.�IG�T�e�� ���<c����.nV}4l>��1�/���L�RՄr�n�H���� �����MPO    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      �PNG

   IHDR         ��a  �IDATxڍ�kH�Q���ܴ�VB}̈,�$��
��6gs.*�$6M%�l��-�[�D4J�ڜ鲋9)�>UKSWm��A'�Zy���2�§��!��^���~��9�` �ϼ=�5�bV���;�]�;8�rƗ�5F�b}$X�L���D@�a�?bY#�u�hy`o�Y�CK6{ `TLUG�\�����$�ːc�H v+�/A9yC�>ӟt�,����g���y3���Vp�Y�ָ5���c
<F�&v�De��k�g�I���y`Ng��j��)�`��E�K��H �9���(��������Z�\xDf�l�t߉�*�H��|��}+ �5Dm�$�����&�'N����%�5���(�tH¯��ϋ�E�����T
�%�:-��Iԏp!��=��rjl��'������{�v�A��	��BanX�cE�h��@3�
2S�j������JRқF���A��!O��r�����(_�T����@��%h _巌�y�"-����ˉv&��9J��-5�b��A8��Wo �{�p�z����>ƈP��2�06i�+��XP�s�\Kr���u�z�^��'P�^$��Q19�s�,V5�Υ�0�t/���ߛ��vv��LP_��1[���>ӎւ<zL��X�>���K`vD�������<}�k�p�t�d�3�]���	����]��    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     �PNG

   IHDR         ��a  �IDATxڍ�yH�a��M+�"鯴�"��R�t�l����lZ�c�ҡn���+�gjԴ�@;�p*��y�T�B�6Y;t�־�+�`I�񅗗��y��}
�_�q�:���H���s�s��~���u�^��{���4�=�y��3��_�Ba�􅥚}��y,�d�������
6�?��8&���7�`��tɱ��>]KM������"����!V�<�)s��:�����do~�q#GfL����J��!S�4^�)�!�(�^�]Ȏ����k��W���_���&��ԸR�
��rL��R5�IאyR����(�[��ׅg��!�#JDsʜ�)W���0Q=⯵@P�D�C�7��H��}J��S��^T֔".!��hkB|� A���+;S��х/
�"[�r��UԂ�$!4݈
p�C��Ek�cq�d�{���n�1�D���wȼ���\s��7�����H�:���X���;���E�Hz�L�K0�.��%��wf�ͦ�8vޛ�.fU�z�p��>v��@;]��P=݅��Z3�1��l�W�4] ����R�f9�(a��2�h tC׸c��ig�V�ARV3ğ^sh�V��k,"h��	OL�l�~����S/"��H��㶪�M�11�L�?i��BT��L�K`���U���I2�c�}��` 4J���7�XI`S�B�m	�Z��l-Nr�e�,Zɢ�ʹ�O����;�����    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             [Icon Data]
DisplayName=Downloading
DisplayName[ast]=Descargando
DisplayName[ca]=S'està baixant
DisplayName[da]=Henter
DisplayName[de]=Herunterladen
DisplayName[el]=Γίνεται λήψη
DisplayName[es]=Descargando
DisplayName[fi]=Noudetaan
DisplayName[fr]=Téléchargement
DisplayName[hr]=Preuzimanje
DisplayName[hu]=Letöltés
DisplayName[it]=Scaricamento in corso
DisplayName[ja]=ダウンロード中
DisplayName[lv]=Lejupielādē
DisplayName[ms]=Sedang Dimuaturun
DisplayName[nl]=Bezig met downloaden
DisplayName[pt]=A transferir
DisplayName[pt_BR]=Baixando
DisplayName[ro]=Se descarcă
DisplayName[ru]=Загрузка
DisplayName[sk]=Sťahuje sa
DisplayName[sv]=Hämtar
DisplayName[th]=กำลังดาวน์โหลด
DisplayName[uk]=Завантаження
DisplayName[zh_CN]=正在下载

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   �PNG

   IHDR         ��a  JIDATxڅ�]l�Uǻ�1�h&Q.�ܨF.H���]����v�P6�㦛cveڌ���f0���0J&���!Z���1�t�X���}߷?OKH��x��9�y��s��s�xFW�~Ӣ�@q�mI��R�8{�_��.���;���\�)�ab׊Xt�%|�~�� ʍ~������;El�3�t�1���歲vw�r�`-�ׂ�ۋ6�@���E.1{�(H8y�3�>R�ɳ�#�����^�O���1h��l�VI�����Ď�6�E��m� ����7�w�V��[^��h���ع".r׈�օ�
^+r˻(�"�@2�:I2�N��.��H}-n�6&~��Ǌ�y�!`4ܐ;�|��� �c3j�2H~n���8}g<\��+��j�T�i�0e�~SVB� n��j��M$���IR����`�:'{�X�+h;քo�*w��,N�3�����/#�_Cv�C9�>�}�2U�J�S��w��L�y'�GҀ��畔��4ڀ԰��������=�m���!=m�����<�[�F,�BF����jb�C�v�S_�����:%��\k��j�j&�?ặ�+}�>����78�]������
�-��`Oڂ:�"��*���2I�HF�Q�$6���w617�O$�5��ҧg�n���;�;�$�� �A��lP���
�"��N�d>��=�f��4[{�s$<s�q�(�b"��9@��/�i�}�ti�AW)�!'�KHD{H����_fa����B�62}e{>�L��w^#@�b:����ZWm.��c��%\���_-{TW���7eY��2���|�����    IEND�B`�                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ���r���K�ХO[q����� ?<��#���h\fA���T�O��e|����P�eT��=�.M�	��z�p��޽����d�������ۯBP���c��Ɨ1�^��gJE�2�uٚ$�1YV��ˏ�C�B�{�@�*	<�g���Ao����;���Lޠ<�5���SO�w����h�~����Ү4���D]P�@���ߔ��Jm���:}�L̠�XӝuJ:�R,���x��ʴ�'����l�2{��?B ��!�)8`���L��b�ƠW��4��&�	6�4�JM yȠT��c�o2�˦:	���;v�����o^� ' '{3h(�`R�ǔ��~4q����y5Qӣ��P���D��Y_A|���n9O`M��ܹ�*�#O�_��/���Aڡ��m�j�<Q�<�Z�����>!�H����G��>��w���y晶V"�5M��^�#��u��gmA��ޱ�{��̩+wtv��-�u$0���ĺ��C�]������۾}��V!���� ���EeL�&@#]9�L�6l��"Ӎ��8"$�5II`z^"�%�|��m۶�n�0��"�߃_��U��h���-uUX�"��:I"U��b��?���$Y�H�����t]�
�¿n޼��x�<�4���_�c����"ge!L���ѧ�D��Z{���Kp�״��?�q����9���u:����^z~�_�/�jtG�YD
�a��$Z�$�&�3D�qsQ���������/�P��$8�b ���u���`��7�u@��E�E3��5����D�qR�5���3}]�X�����SQ�,����\�_�7!A���Y�
j��`�i7���	�X��X���� ��
	�Y�f�'�kS�X�����SO�a���9;��i��Q�&ҡ�ɐ~�4@'��q^"�c%�30}G���0Iө�:$��s���2�.4}���H��E�	0)�i�b�!qٛf�=I�}����o&s�����۷��J�@�@'}P�S]��ԃ�%�B�7��3L�!���,��m֚�<�΢��'))��'L� ��l6���7�L�x��=�֭[����jce���*!j�ls�Cq`_R$��5q��-�M�(�kdâ�\K����j�H��"�j�?���[�L���O]F#x�nB,J��y
�Mx4 �MV?	ٚ!B�dR��]���M/`�*��뮻�x�,
@qU��h�b�o�hU��/0u�kV~�6�5O�j�qqU���ω����>�l�Tg�ZVmڴi1^�OD+�KM��b��E�CM@�L�	����q4V�Yr�E����J=�(�>�\��>I�̨�r �Y��d
��1��~�`4�f�-��Gt��F+�Q�>��_|���O�h�5��Eٶm�o��*EW&�Tj �ԍ ��X�&y[�*R�?h���:��q�k|ug������YԵ�IK'����o�zC��~��Sr�ڢx��|�.ڟ���/��Jm�a�l�70e~��[�xT�T�쪕��'��ȋ�u-�Eݲ�(�Ǒ!���/޾}��V�X񐸬���>�j��C��xZkҾq:�H���7�#��=%?*��фLJ�/�<Rv��`��W��PNUqT`�䀃���ӯ�f���;��,��љ�s�AO{�f���C�"w��[�4�⼀���A��?���}�S��Rq}��>/��e�ei�2��˕��M����wø��}��2�2ݧv�*��B��9<{�ë�J�ډ28Q���Wk�E��*4�6�`s�p�z���ރY6��m��Y�;3]m�����Q�lь2Y�uY}��7�	�M���3�d�����w�/.o����i�����k��͘202�ս|2x���e� �|�N�Ѫ;Լ�/�̐E�0�dsЍ<c[P�g������#��Bή��^�9����pr��H��cT��{p��<�j��yϴa��<��+@�\����<'��l݌�	����>���믿�:�2��b �(�G�~�&����n�# �z��2�²�jP*@Ng�:�,�������x�p	-��yܙ���,��D������|�,案��e| �B:yBB�o��
�X�/@��:i`�
�PF������x��ú��q�4��� �.n矝P(�WP�6,k�`+���ތ���Z� ���e:�?�%|u����bbO��O`@0�	.hxx�Ky�������;����D\����a~w��( ��0GoG-|��.���o� �U����?N w�F�^p�H��I��:���v�������w��:����r�\��V�G "���q"�7��q������%  L��Lak_?aaY�v���		�"ڟ���,���$�+�{6��F���㡅/W]z	v����e84�p�a���P��-ꀅ�:`.���3m(a��n��[�p�.^0\$�%��>=^<�'H�<�#�g���_$��8!r��eP"���e<�X��sCp�
\qN{�����C�Y�Pb��6o�|z�]����/~�"^����z\�f2�b���M����}B9H�B��;!�����
�=^7�w&����3:`��8������g`�*����Ȫ�@M$*Uh80��nWГ�/q}��q���p�T���g�i�`v�Z��Z������S&_�{2��������e�@�)Jj���X��n��M�j		����v�PI5���1=�%HCk�z	T��4��K >M��[��� e�`�|o;��i�9�h��,�Y_v/�}ANiΡR�|����.W��`�L����񼺔�%�5&-^��5�m'4#���-!����S��x�h��� ���N������$R=�iN@N�<�M_��W�馛�� �xsT�Gν7��8��A����m�y�Aq�♝���Y�33�8��Vm3��
< � �Cj�]*��/sk���0=��H�mtH
��`�'&�����0~i(��V@���Y>	��<��q��u}m088X�l,���Xp�e�]���OF����o?��s�e�� 6N�k�. �܇�h��X58z�r�jQ7`)�$kO���U:�~>yUFpW8�}�W�E'b����� �as��B����#I�R���?f��� ���"�&Ox����ٸ�gv�p�|������h���>�O?�4�= ��r�P͈�~'�@r�[Tpl�G�n�#@1Ĥ�I���g��'?0�l)s�(��!��ew�����2���5<e��y�u&��Ot1i�?;~f�%�XgJѺ�7B"���F�'`>!��Z�{�?�1瞑�TB�V2�G�D$�i\����&!��X�rG�&=|Qm�K�K��,Il��G�K0X����2�_ȘR�ϷW+�d�/���[�����{5�k3U�C/`��������S�o��	��#�AV��l.ǈל��	@�ej,W!��sK6mڴtժU;�5>�����:���h�P��c�=0O]#���@@��[��
�{�Ϻ�9����9.�\�8�=Q���ԤWO.�N4NE�rF�BV8{�q�#�'C�R�$�7�)�!�I$5�%"m܇�+�����h�A�s�{(��x�;�A�.������2��Qx� �*���M82�)'�D�u��;^h�]P]�x}�7��T �]m0����b�★�g͠Y�6���C_S"��R��J�O�>9Ͽt��9�2��+����H*
oߓ�a�ۀ6(��;/��p��^q;�8�t&C���"�$�Q�k����"OeP��ٰ >�1��_���[/�DX�r��M�������!B���ނ~nF� ��uÒ3{`��^8wQ/�s�fM���_[�c��v�_l�w�}���迧�^��`���`�w�/����ðbN��f�u��2|GW�s�=�#��7�<��5����9���,PT:T�E5�B֜�����$��,�q�����s��s���%����i�]�οP�e�����-�+����̏��Z>�K�
��W�v�~`���xe.��8����Z�~��H���V���*����^�@c��p���(���Z<��	@V���8����¯E�_�7V̟����Z��e���d�\� ����/����=�\~F���ir�K�����`�I*��6-�ea�S�|@�OI�R���$ �7��\��39	��1
��_uֿ�+������'��j���a��Ά�] >��y|�`�]7��O|�?a�Hb��2�)�KHy��x�dP��;j�o�~���$����� X����B3�ku�Xܚw�M�'�僢{N��.\�b����c��oN3�8�$�':Sv�n�n��	��1����S�a��<#Mn�Z*��K��L-��UK�D�l�v��ؗD�$���Z!�+g�$@-3�k�^[~�pf�ӂ�1T���rq������E�&����|�^xB�����hQF�?R5�G�}�eӗ �ǟg�G�����q�li�J�F� ���P�u�;�q�@�g�z$/ ���)�hRH�h�TնD��nt����i%Lp��)K ��3�	G�)�|+K0G��=��؊��WP��~.�7�e���9I�x�@��!��_M�l	t\k<�O<�DvZ��`���L�ͨ�8�꒢��bR/���mR ^G^��+�C�_0�������j�Cr�q�\Ԍ�6�����8m	���+�#�4`��)R+'� q�>�+4�D�uF{,��%�q�d�g�^0�ƼpF�J�������������<@��g���F3�5����, ��F��#�e~F�$�e���_�W�u=B�[	)�yaI�AYۂ�b��oK���wǒ*nY�����@�ud�:��2I_�&Ǩ:(H�xL�j���m���$7.-J�`م|�/�#"x�_7P�oT��s4fsa�\�tm�w*��t��5jy�LEh�v]���!V xO2)<tLL�Ex�����R��h��Y��Nͮ2�D�^U�2�`��<�WW�4��jP�ݩ�0��]RC8%P9b��.n�4ʘ���B鈭�"%���M��bᚱ�d�_zm��t����m�֘Z+�
���2l��=��ܠʃ�3��֊ʹ~7Y����+NF�G��I���7���vI��1SEc`��QDuAb`�bâ�E�f2�!	��}%��c#gj�T7�^���N`�ݠ68�h1��ds�&r�@��G_���HҭY ��u���(Khْ��`���ӟ�(vv��|rԎ�w����@��V�����w��<e�[M�{���������v�k��@$���W1lӓ ��(�_�\w2	dqw��x��?I� _Z\�_���yh�e8�c5ҢK;�#˻Oh�����+j��㞁�kx�+��9�Y�#ҳ��m-SЌ�M�N�{��4���[�O�V?I�g<�`�0���5I���Y(vx�rVW�/�'K|��۶:�2�O�W��b~�XW����N��A.;wn��m �`��U��ӗ �� �)$K"��q�v躍�����s  ^b�3A0�'З�N��sw��~"
VES]�і�ymP>k�g��s�(��R�Y���_�@�~h�'�;z�ʹ���1���_���U��*��6&�r�ھ@jx�/<� ���v&x,��f�	��,��U��:�� Z��6���k��Q��`[���n�)�O�p�[�ܓ��]w�s���ǵCOK�ѫ�}�{�גH	���t�Z㮒�H�.X~����[���Rgdd��ph��_���y��z�6H�$�cI�G�E+u7�s��g��e/��n��3��\u�0ˤ.�Q�i��D훆���۔� ��n��i�8��e��N,��8����K�D�yO0!w�;��-�S{؎ݝ�	Dh�Ό�\��ޞޣ�e�U��d:W�����^��U'�?�q>��˗�T�\>Ɣ�zl��X�n��^xa/�\��3u2C7'`�>���iv~L�@DN��ȟ8�����̡A�@O$89T�g�9��?U(d!O�'��j,�ف`e�b��Nu�K߂i`���P�j�Ew�3i}Wx�J�ؿ
W�] }g�c!t�o)d�����aA�U1eL�p���Lz\�_d��y��]H�8@x�޿�ړ��-���>Z�m�<�7HE�Y�P^~7Z�%���e�0�
��<^�7�Z�SO!����}J�s]���� ��C�V�^`��ݼ�� ���&	���`�4^i�V% Y�k�{�� ��4{Pv��n1��_b�_3l�|�G�����"��K,	�������.�a&Kݧ���_<��!���(�s�N��\�n8�C�O j�K;MҦ##޲ѩ�><�Y��Y����9�EЭ�_ݖ5r�f_5���ߺeZ{ �O�UU�eԸ@WZK����z�����0Ԃ�ټ!��'t��(U��O�91�¾�`�o���dx�6��~�-��ygj��GP��:8�w����g���/ezp���G�Ԓ݁��2��l�2o�XA���'�/ڼtwd�n��m9~�<����H�[�3I�u�ڵ'�%$����>�`�f��){ )L٤�@VY��	��?���.�Bis�s�6�����Q}Ϋ�Z0X�8���I��#��4y���3�a^o6m�J��_���2?���L�8�^GY
f�< �[�W��P�^~��N���}�]7�������Z�����r�N֦�X�f͑�7�/�Ū���3�<D���w���4��"��|������C���4�I�86���������l%��~Fٌ_j�G�S)CG[��sЅV��pr��8MA-Y}
tG*.�����'��k�퓪~;vޥ��%��Լ�up׍�ޤ2��&X:�G�>��M��o��.]��M��Ld� X�A��`WM	1M�H����x9��l� ��x��jhck��(9;ϔ����b��Y�,K�9����L�T���۲Y��6J�����L�1�UT'X��D�^�j��[5:|1�7��\��4�w�G���^��7VC�B�yeݓN~�J����d�{ � 5�:w���,�.S��AdC)p��#�푂������A�p]j�&�伩e3�
jg����?���>m��N�-e�]$KH(��|+%��0��j+vm���^���q|�s}�ӛ�m������Q���R��K��N~���oT�'jrR�ΟD�?8�	 .����������E���RH'u�x@&F����֘Q@��[����H~�YV+#A�iDcu����L��l�M�WY�A.���3����B��af�w���p���,qU�>8{��*�4O����w�@��uk`��a5�H���n*���t�j�
4�NΦ�X�n]e˖-��7o��ۙڦ���ⵦ�8��7N�'3h��Da�u�Y@z>ly`��<�չb�EO�PC�=7�� �����I��.���֪3�{1/L�/�������>�Gݮ��m�;�\u�Y����<[$f��u��j��it[����~ �8��@Z��  �NS���Y�����^�5�!�x���zܳ������6\[G����O*��D�ľ�~a-�!3�����o2��xુ��w�}�JN7�X�����;{6���s��B�!�Ł_'{�紅�Ү3x�a�Q�r�\��[�n�v�"]��!TO`z�������D /�<��}o@�ٗ!������ϋi��e�׾��,�Ď4 /��Vay��>bܞj�@��}}�Հ�@�������x�Rvg�rG�E��{L�^'�I1���oK;�<0��j	���vP|��!�RI������j��`ͫ�QP��|�6�
J�-�_/K{�R'�۫nU ��AB��A*qǟQvC�⯽��K��'�8����^G���츮$m�ps7ܚ�?�߰f�l��Ű��n#�M:>.�#K �S�,�4�J�'K��$�����s�nO\�Gxy6�{��|���)5�VT,gx�	6���y���]�6sT�`�)�`gH��pa9��2����= �+���Z����~�����.�*�� k�υk/^��k�a�;�u�2Qt�'j�R�@�S���k\pA9� ��s�9��/n��N�N�� K7���x|m+C��
oo^��|Tm����)50[���B�yB�"����ɒ����K�-�3?�m��U��{�Q
���%���V��h�,�:W���Y���	/Y�K҇~��M��o)ǟ�{;^d[f�/O�U�z�#���!�w���x�j��(}YB�H����7t��v>�l��~ � ��>�R��G�f���P���T�����3��s�̕�9*�u�Xt�ץ:u�ڦ�M����?�X�b�d�% .���˷�ر�kx�&Y���&��W O� | �N/�z�b��ߒu�?I���au�)����N#!8�T*�@8W���i� �_ۘ?��.�7���za�ܮ:PV*��#��'~R�������K���||��+z �މ:'���ˊ#�������.��A ��k�e�Cm�`��)��I�D��CxR���,O�+m�ᆮ��*1g�h�3z;a��NX1���B��w:�7|�M��,�N�H������S�\�lƍ1��/���_��MޅE���K�#��S�y�����e�)�������+0\��@5	d�<��j��N=��y���B:۳�3:0oV',�U�Es�h�3F���q�7�TÓ�:�o�Xʪ�x	��e˖�9�� .$�L��"~�v�(\G���4��www�Xw������HN��$���2/<��9TLV�t��'�*�L,w�T����gm��?��X�Ֆt?
�:���ݴw@�u�����n뾯���sK�.��T��e	@��/�|^�{u�O����'�"�.�4S��j��gJ�%i�+'�I�A^��iY�.J�G�_��W�{������a�@\��{�F	�~�KtP��*I9h�YJ�5x�w&^�R+��b�f�A���;�"7q�L���%K�<|��K �����FCqȥ�rvB����@�۲H�E����ǑДD���$�����o�J�,d �ڵ���7��,ԀX�L$�L�GZ|e�^�hv#�(��Qi�f���sjM� ����G8<00�w�y�:���Eq�0 �^�d�R���unX��0N����U>5�P��Pc�/��������o2����*���W�B�B��
�e=@p���߱c�
f���-��.8�=D\�9���ɡ(k#��a��BI��QRGMs�b&�����ŋoS>�)a���Oǲe˶�ܹ�w��<D��UЩ��&�/�6Sg�e9$?�����ES'��$�k�E������~ݤOnذ�NPv����T���c��n����k'��V,���$.HO�'H�mj���QV_~9�&[~��S���+���톽S�	Z5�m�|�r�����~�)��#@R"�V3E�� ?��*�*6Mͭ4WǕ54�IQz��׮�袋���o� ީ"A+N�E�������֯_�8�^��KE��7��d�h<A����-m�xT��l�������Ǐ�o���� �_%�)��Vd��h�5*<���k���x�/jF�t;��r	Ӝ@\�<Vo���A$�nR+�r�!��G����5kЀ�H�� �	`����}��7�Moz�#Th�	���M����?	�݁=J��S�a�ޏ#��}���^p�_��(��`�I�2��>2���|f�;���G�6��0 n�\]�Sw��(��9Rs���@%�����ڵk� _7@���	�/������ӟ���w����_ի>.0��߉��"�J��@���M�?�,n�߿��u���U ~� ���2/Њ0Y~&������u�]���.�ڷ*�������� I-PT�"�D��mHoʣ�u��?���+���_>��wN�h	D���-��������~��������f /�����'=��h��ST�Z|� Q���s�x��>x��7�L���B
�H	�'�e� �ؚa=���:묳~ߥ�V F��mWs�$�b���|���FWڡ�|���\�Ry�_����ޝ
�M$p���ˠV#�.�U��A >|��߼��K����Q���"*S�� I3=QDI�v��q2U��?��'N�x��[o�������wb��;�����������Ɏ��զ�O���TC��$H2a��5�p�V=��K�U�}������7�}��,@z5�ЍI�Z� ��gb������?���+Wނ��VI�z�q���0�>I6J��e������/}�s��ǋ�o��� ��n @x���^s�M7�Y�PXh��Q�?ɂ��y��j��O\�3j��m۶�-oy˗<8b x5a�`��4�O��Ʋe�:x��w������u�JL�����Ǹ��2U��<�N.;vl^�/}���}�*7a�M$��`|�@���=�7�0�c���-\���M=���$�//�e|�n�R��c����z�o�q�?tg��Q��,���d79r���/x�{�{koo�2S�S~��Q�F�%�#�)d"���ӟ��Q�����w�	�� Uź���<�S�q�q���(ض�v�=�\�~��ߚ={�R���QsIˍ'Z����J�R�9�w?���O���$`Hn܈s:<F/���4�bq��D�y��\����V��]�n������>P'y&*��CQ���'�x�Ǟ��'>��{��9��,���l��q���7���tcII`I1A!�`�����w�y��֭�(��L�'��O��m4� Ib����������{��.�E�D�;I�Gz�j�q��R�&YdE�s�	h亻�;��������^�jժ�H�\\_��L��n�s���è�7�k_{ᩧ�:X��t.I��%��8�U
��%@#�t$0��!��	r2	��Y�fu��}�;�k��`�ʕK��zZ�ɘ�Yzz��'�|�ů����W$��$(K���e�.����^�)_�r��&�Y"S�\�����J���L&w�u�-��+���ga̰����]��J�"�<�6�7n��*Ƴ�~��=�v�: ^��t.+ֿ,Y�J����ELv�R�$FA�ђA}����	��/�� �d^���Ͻ���.^�xւz�8㌞9s��(
��\�ѣGк�ػw��W^y�ئM�=��#{><,�(+�9�����	����?D���$ݚ�(	E�n�@�#@F&�4��cŊ]�%z{zzڊ�b����F�����Vd����
P�����_~��3�<s���xU3d"�5�a�YU�x	�<i_�q& (�g1�"�+X�t�e �<閗��
���LD .�7@�&�u=t<���T��Q H � %E�x����g8��)��&@�ABDC�\F��P��,��e
�A�z ���л���u���O4A�$�#�qyF9��>��{ �Y�p���Edfd�%��F���vR��T�iC���(.`n������܃�,��1ƾʐ�\U��v�!Г�7tV*���"��I���m��5�:���q��� ��qRÍ���" .O^�&��<�OK��I�����1��7���,��1�0��D�8��$�Ok4Aә5I���� t'� 0P��F�?��� �q^",v��b�c,���K����Z�ӊ MX��Y���'!B3��&oy�O[$ B2���dK �8/��^�sIޣ�?�	����L|���!8�Q�%�
�� �'C�7��x��Bx��b:�>%���Y��I�ility to Comply Due to Statute or Regulation. 
If it is impossible for You to comply with any of the terms of this License with respect to some or all of the Covered Code due to statute, judicial order, or regulation then You must: (a) comply with the terms of this License to the maximum extent possible; and (b) describe the limitations and the code they affect. Such description must be included in the LEGAL file described in Section 3.4 and must be included with all distributions of the Source Code. Except to the extent prohibited by statute or regulation, such description must be sufficiently detailed for a recipient of ordinary skill to be able to understand it.
5. Application of this License. 
This License applies to code to which the Initial Developer has attached the notice in Exhibit A and to related Covered Code.
6. Versions of the License. 
6.1. New Versions. 
Netscape Communications Corporation (''Netscape'') may publish revised and/or new versions of the License from time to time. Each version will be given a distinguishing version number. 
6.2. Effect of New Versions. 
Once Covered Code has been published under a particular version of the License, You may always continue to use it under the terms of that version. You may also choose to use such Covered Code under the terms of any subsequent version of the License published by Netscape. No one other than Netscape has the right to modify the terms applicable to Covered Code created under this License. 
6.3. Derivative Works. 
If You create or use a modified version of this License (which you may only do in order to apply it to code which is not already Covered Code governed by this License), You must (a) rename Your license so that the phrases ''Mozilla'', ''MOZILLAPL'', ''MOZPL'', ''Netscape'', "MPL", ''NPL'' or any confusingly similar phrase do not appear in your license (except to note that your license differs from this License) and (b) otherwise make it clear that Your version of the license contains terms which differ from the Mozilla Public License and Netscape Public License. (Filling in the name of the Initial Developer, Original Code or Contributor in the notice described in Exhibit A shall not of themselves be deemed to be modifications of this License.)
7. DISCLAIMER OF WARRANTY. 
COVERED CODE IS PROVIDED UNDER THIS LICENSE ON AN "AS IS'' BASIS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, WITHOUT LIMITATION, WARRANTIES THAT THE COVERED CODE IS FREE OF DEFECTS, MERCHANTABLE, FIT FOR A PARTICULAR PURPOSE OR NON-INFRINGING. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE COVERED CODE IS WITH YOU. SHOULD ANY COVERED CODE PROVE DEFECTIVE IN ANY RESPECT, YOU (NOT THE INITIAL DEVELOPER OR ANY OTHER CONTRIBUTOR) ASSUME THE COST OF ANY NECESSARY SERVICING, REPAIR OR CORRECTION. THIS DISCLAIMER OF WARRANTY CONSTITUTES AN ESSENTIAL PART OF THIS LICENSE. NO USE OF ANY COVERED CODE IS AUTHORIZED HEREUNDER EXCEPT UNDER THIS DISCLAIMER.
8. TERMINATION. 
8.1.  This License and the rights granted hereunder will terminate automatically if You fail to comply with terms herein and fail to cure such breach within 30 days of becoming aware of the breach. All sublicenses to the Covered Code which are properly granted shall survive any termination of this License. Provisions which, by their nature, must remain in effect beyond the termination of this License shall survive. 
8.2.  If You initiate litigation by asserting a patent infringement claim (excluding declatory judgment actions) against Initial Developer or a Contributor (the Initial Developer or Contributor against whom You file such action is referred to as "Participant")  alleging that: 
(a)  such Participant's Contributor Version directly or indirectly infringes any patent, then any and all rights granted by such Participant to You under Sections 2.1 and/or 2.2 of this License shall, upon 60 days notice from Participant terminate prospectively, unless if within 60 days after receipt of notice You either: (i)  agree in writing to pay Participant a mutually agreeable reasonable royalty for Your past and future use of Modifications made by such Participant, or (ii) withdraw Your litigation claim with respect to the Contributor Version against such Participant.  If within 60 days of notice, a reasonable royalty and payment arrangement are not mutually agreed upon in writing by the parties or the litigation claim is not withdrawn, the rights granted by Participant to You under Sections 2.1 and/or 2.2 automatically terminate at the expiration of the 60 day notice period specified above. 
(b)  any software, hardware, or device, other than such Participant's Contributor Version, directly or indirectly infringes any patent, then any rights granted to You by such Participant under Sections 2.1(b) and 2.2(b) are revoked effective as of the date You first made, used, sold, distributed, or had made, Modifications made by that Participant. 
8.3.  If You assert a patent infringement claim against Participant alleging that such Participant's Contributor Version directly or indirectly infringes any patent where such claim is resolved (such as by license or settlement) prior to the initiation of patent infringement litigation, then the reasonable value of the licenses granted by such Participant under Sections 2.1 or 2.2 shall be taken into account in determining the amount or value of any payment or license. 
8.4.  In the event of termination under Sections 8.1 or 8.2 above,  all end user license agreements (excluding distributors and resellers) which have been validly granted by You or any distributor hereunder prior to termination shall survive termination.
9. LIMITATION OF LIABILITY. 
UNDER NO CIRCUMSTANCES AND UNDER NO LEGAL THEORY, WHETHER TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE, SHALL YOU, THE INITIAL DEVELOPER, ANY OTHER CONTRIBUTOR, OR ANY DISTRIBUTOR OF COVERED CODE, OR ANY SUPPLIER OF ANY OF SUCH PARTIES, BE LIABLE TO ANY PERSON FOR ANY INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES OF ANY CHARACTER INCLUDING, WITHOUT LIMITATION, DAMAGES FOR LOSS OF GOODWILL, WORK STOPPAGE, COMPUTER FAILURE OR MALFUNCTION, OR ANY AND ALL OTHER COMMERCIAL DAMAGES OR LOSSES, EVEN IF SUCH PARTY SHALL HAVE BEEN INFORMED OF THE POSSIBILITY OF SUCH DAMAGES. THIS LIMITATION OF LIABILITY SHALL NOT APPLY TO LIABILITY FOR DEATH OR PERSONAL INJURY RESULTING FROM SUCH PARTY'S NEGLIGENCE TO THE EXTENT APPLICABLE LAW PROHIBITS SUCH LIMITATION. SOME JURISDICTIONS DO NOT ALLOW THE EXCLUSION OR LIMITATION OF INCIDENTAL OR CONSEQUENTIAL DAMAGES, SO THIS EXCLUSION AND LIMITATION MAY NOT APPLY TO YOU.
10. U.S. GOVERNMENT END USERS. 
The Covered Code is a ''commercial item,'' as that term is defined in 48 C.F.R. 2.101 (Oct. 1995), consisting of ''commercial computer software'' and ''commercial computer software documentation,'' as such terms are used in 48 C.F.R. 12.212 (Sept. 1995). Consistent with 48 C.F.R. 12.212 and 48 C.F.R. 227.7202-1 through 227.7202-4 (June 1995), all U.S. Government End Users acquire Covered Code with only those rights set forth herein.
11. MISCELLANEOUS. 
This License represents the complete agreement concerning subject matter hereof. If any provision of this License is held to be unenforceable, such provision shall be reformed only to the extent necessary to make it enforceable. This License shall be governed by California law provisions (except to the extent applicable law, if any, provides otherwise), excluding its conflict-of-law provisions. With respect to disputes in which at least one party is a citizen of, or an entity chartered or registered to do business in the United States of America, any litigation relating to this License shall be subject to the jurisdiction of the Federal Courts of the Northern District of California, with venue lying in Santa Clara County, California, with the losing party responsible for costs, including without limitation, court costs and reasonable attorneys' fees and expenses. The application of the United Nations Convention on Contracts for the International Sale of Goods is expressly excluded. Any law or regulation which provides that the language of a contract shall be construed against the drafter shall not apply to this License.
12. RESPONSIBILITY FOR CLAIMS. 
As between Initial Developer and the Contributors, each party is responsible for claims and damages arising, directly or indirectly, out of its utilization of rights under this License and You agree to work with Initial Developer and Contributors to distribute such responsibility on an equitable basis. Nothing herein is intended or shall be deemed to constitute any admission of liability.
13. MULTIPLE-LICENSED CODE. 
Initial Developer may designate portions of the Covered Code as "Multiple-Licensed".  "Multiple-Licensed" means that the Initial Developer permits you to utilize portions of the Covered Code under Your choice of the NPL or the alternative licenses, if any, specified by the Initial Developer in the file described in Exhibit A.

EXHIBIT A -Mozilla Public License. 
``The contents of this file are subject to the Mozilla Public License Version 1.1 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at 
http://www.mozilla.org/MPL/ 
Software distributed under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF 
ANY KIND, either express or implied. See the License for the specific language governing rights and 
limitations under the License. 
The Original Code is ______________________________________. 
The Initial Developer of the Original Code is ________________________. Portions created by 
 ______________________ are Copyright (C) ______ _______________________. All Rights 
Reserved. 
Contributor(s): ______________________________________. 
Alternatively, the contents of this file may be used under the terms of the _____ license (the  "[___] License"), in which case the provisions of [______] License are applicable  instead of those above.  If you wish to allow use of your version of this file only under the terms of the [____] License and not to allow others to use your version of this file under the MPL, indicate your decision by deleting  the provisions above and replace  them with the notice and other provisions required by the [___] License.  If you do not delete the provisions above, a recipient may use your version of this file under either the MPL or the [___] License." 
[NOTE: The text of this Exhibit A may differ slightly from the text of the notices in the Source Code files of the Original Code. You should use the text of this Exhibit A rather than the text found in the Original Code Source Code for Your Modifications.] 

%% This notice is provided with respect to Mesa 3-D graphics library v. 5, which may be included with this software: 

Copyright (c) 2007 The Khronos Group Inc. 

Permission is hereby granted, free of charge, to any person obtaining a 
copy of this software and/or associated documentation files (the 
"Materials"), to deal in the Materials without restriction, including 
without limitation the rights to use, copy, modify, merge, publish, 
distribute, sublicense, and/or sell copies of the Materials, and to 
permit persons to whom the Materials are furnished to do so, subject to 
the following conditions: 

The above copyright notice and this permission notice shall be included 
in all copies or substantial portions of the Materials. 

THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS. 

%% This notice is provided with respect to Byte Code Engineering Library (BCEL), which may be included with this software: 

                     Apache Software License 

                     /*
====================================================================                      * The Apache Software License, Version 1.1
                      *
                      * Copyright (c) 2001 The Apache Software Foundation.  Allrights
                      * reserved.
                      *
                      * Redistribution and use in source and binary forms, withor without
                      * modification, are permitted provided that the followingconditions
                      * are met:
                      *
                      * 1. Redistributions of source code must retain the abovecopyright
                      *    notice, this list of conditions and the followingdisclaimer.
                      *
                      * 2. Redistributions in binary form must reproduce theabove copyright
                      *    notice, this list of conditions and the followingdisclaimer in
                      *    the documentation and/or other materials providedwith the
                      *    distribution.
                      *
                      * 3. The end-user documentation included with theredistribution,
                      *    if any, must include the following acknowledgment:                      *       "This product includes software developed by the                      *        Apache Software Foundation
(http://www.apache.org/)."
                      *    Alternately, this acknowledgment may appear in thesoftware itself,
                      *    if and wherever such third-party acknowledgmentsnormally appear.
                      *
                      * 4. The names "Apache" and "Apache Software Foundation"and 
                      *    "Apache BCEL" must not be used to endorse or promoteproducts 
                      *    derived from this software without prior writtenpermission. For 
                      *    written permission, please contact apache@apache.org.                      *
                      * 5. Products derived from this software may not be called"Apache",
                      *    "Apache BCEL", nor may "Apache" appear in their name,without 
                      *    prior written permission of the Apache SoftwareFoundation.
                      *
                      * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED ORIMPLIED
                      * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIEDWARRANTIES
                      * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSEARE
                      * DISCLAIMED.  IN NO EVENT SHALL THE APACHE SOFTWAREFOUNDATION OR
                      * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,INCIDENTAL,
                      * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,BUT NOT
                      * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;LOSS OF
                      * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVERCAUSED AND
                      * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICTLIABILITY,
                      * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING INANY WAY OUT
                      * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THEPOSSIBILITY OF
                      * SUCH DAMAGE.
                      *
====================================================================                      *
                      * This software consists of voluntary contributions madeby many
                      * individuals on behalf of the Apache Software
Foundation.  For more
                      * information on the Apache Software Foundation, pleasesee
                      * .
                      */

%% This notice is provided with respect to Regexp, Regular Expression Package, which may be included with this software: 

The Apache Software License, Version 1.1
Copyright (c) 2001 The Apache Software Foundation.  All rights
reserved.
Redistribution and use in source and binary forms, with or without modification,are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in
the documentation and/or other materials provided with the
distribution.

3. The end-user documentation included with the redistribution,
if any, must include the following acknowledgment:
"This product includes software developed by the
Apache Software Foundation (http://www.apache.org/)."
Alternately, this acknowledgment may appear in the software itself,
if and wherever such third-party acknowledgments normally appear.

4. The names "Apache" and "Apache Software Foundation" and 
"Apache Turbine" must not be used to endorse or promote products 
derived from this software without prior written permission. For 
written permission, please contact apache@apache.org.

5. Products derived from this software may not be called "Apache",
"Apache Turbine", nor may "Apache" appear in their name, without 
prior written permission of the Apache Software Foundation.

THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED.  IN NO EVENT SHALL THE APACHE SOFTWARE FOUNDATION OR
ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
SUCH DAMAGE.
                                                             
====================================================================
This software consists of voluntary contributions made by many
individuals on behalf of the Apache Software Foundation.  For more
information on the Apache Software Foundation, please see
                                                             
http://www.apache.org.

%% This notice is provided with respect to CUP Parser Generator for Java, which may be included with this software: 

CUP Parser Generator Copyright Notice, License, and Disclaimer

Copyright 1996-1999 by Scott Hudson, Frank Flannery, C. Scott Ananian 
Permission to use, copy, modify, and distribute this software and its
documentation for any purpose and without fee is hereby granted, provided thatthe above copyright notice appear in all copies and that both the copyrightnotice and this permission notice and warranty disclaimer appear in
supporting documentation, and that the names of the authors or their employersnot be used in advertising or publicity pertaining to distribution of
the software without specific, written prior permission. 

The authors and their employers disclaim all warranties with regard to thissoftware, including all implied warranties of merchantability and
fitness. In no event shall the authors or their employers be liable for anyspecial, indirect or consequential damages or any damages whatsoever
resulting from loss of use, data or profits, whether in an action of contract,negligence or other tortious action, arising out of or in connection withthe use or performance of this software. 

%% This notice is provided with respect to SAX v. 2.0.1, which may be included with this software: 

Copyright Status

                         SAX is free!

                         In fact, it's not possible to own a license to SAX, since it's been placed in the public
                         domain. 

                         No Warranty

                         Because SAX is released to the public domain, there is no warranty for the design or for
                         the software implementation, to the extent permitted by applicable law. Except when
                         otherwise stated in writing the copyright holders and/or other parties provide SAX "as is"
                         without warranty of any kind, either expressed or implied, including, but not limited to, the
                         implied warranties of merchantability and fitness for a particular purpose. The entire risk as
                         to the quality and performance of SAX is with you. Should SAX prove defective, you
                         assume the cost of all necessary servicing, repair or correction.

                         In no event unless required by applicable law or agreed to in writing will any copyright
                         holder, or any other party who may modify and/or redistribute SAX, be liable to you for
                         damages, including any general, special, incidental or consequential damages arising out of
                         the use or inability to use SAX (including but not limited to loss of data or data being
                         rendered inaccurate or losses sustained by you or third parties or a failure of the SAX to
                         operate with any other programs), even if such holder or other party has been advised of
                         the possibility of such damages.

                         Copyright Disclaimers 

                         This page includes statements to that effect by David Megginson, who would have been
                         able to claim copyright for the original work. 
                         SAX 1.0 

                         Version 1.0 of the Simple API for XML (SAX), created collectively by the membership of
                         the XML-DEV mailing list, is hereby released into the public domain.

                         No one owns SAX: you may use it freely in both commercial and non-commercial
                         applications, bundle it with your software distribution, include it on a CD-ROM, list the
                         source code in a book, mirror the documentation at your own web site, or use it in any
                         other way you see fit.

                         David Megginson, sax@megginson.com
                         1998-05-11

                         SAX 2.0 

                         I hereby abandon any property rights to SAX 2.0 (the Simple API for XML), and release
                         all of the SAX 2.0 source code, compiled code, and documentation contained in this
                         distribution into the Public Domain. SAX comes with NO WARRANTY or guarantee of
                         fitness for any purpose.

                         David Megginson, david@megginson.com
                         2000-05-05

%% This notice is provided with respect to Cryptix, which may be included with this software: 

Cryptix General License

Copyright Â© 1995-2003 The Cryptix Foundation Limited. All rights reserved.
Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions aremet:

   1.Redistributions of source code must retain the copyright notice, this list of conditions and the following disclaimer.    2.Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the     documentation and/or other materials provided with the distribution. 
THIS SOFTWARE IS PROVIDED BY THE CRYPTIX FOUNDATION LIMITED AND CONTRIBUTORS ``AS IS'' AND ANY EXPRESS ORIMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FORA PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE CRYPTIX FOUNDATION LIMITED OR CONTRIBUTORS BELIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOTLIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESSINTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OFTHE POSSIBILITY OF SUCH DAMAGE.

%% This notice is provided with respect to X Window System, which may be included with this software: 

Copyright  The Open Group

Permission to use, copy, modify, distribute, and sell this software and itsdocumentation for any purpose is hereby granted without fee, provided that theabove copyright notice appear in all copies and that both that copyright noticeand this permission notice appear in supporting documentation.

The above copyright notice and this permission notice shall be included in allcopies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS ORIMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESSFOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE OPEN GROUPBE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OFCONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THESOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be used in advertising or otherwise to promote the sale, use or other dealings in this Software without prior written authorization from The Open Group.

Portions also covered by other licenses as noted in the above URL.

%% This notice is provided with respect to Retroweaver, which may be included with this software: 

Copyright (c) February 2004, Toby Reyelts
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer. 
Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution. 
Neither the name of Toby Reyelts nor the names of his contributors may be used to endorse or promote products derived from this software without specific prior written permission. 

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 