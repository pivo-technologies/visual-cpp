/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    devguid.h

Abstract:

    Defines GUIDs for device classes used in Plug & Play.

--*/
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


DEFINE_GUID( GUID_DEVCLASS_1394,                0x6bdd1fc1L, 0x810f, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f );
DEFINE_GUID( GUID_DEVCLASS_1394DEBUG,           0x66f250d6L, 0x7801, 0x4a64, 0xb1, 0x39, 0xee, 0xa8, 0x0a, 0x45, 0x0b, 0x24 );
DEFINE_GUID( GUID_DEVCLASS_61883,               0x7ebefbc0L, 0x3200, 0x11d2, 0xb4, 0xc2, 0x00, 0xa0, 0xc9, 0x69, 0x7d, 0x07 );
DEFINE_GUID( GUID_DEVCLASS_ADAPTER,             0x4d36e964L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_APMSUPPORT,          0xd45b1c18L, 0xc8fa, 0x11d1, 0x9f, 0x77, 0x00, 0x00, 0xf8, 0x05, 0xf5, 0x30 );
DEFINE_GUID( GUID_DEVCLASS_AVC,                 0xc06ff265L, 0xae09, 0x48f0, 0x81, 0x2c, 0x16, 0x75, 0x3d, 0x7c, 0xba, 0x83 );
DEFINE_GUID( GUID_DEVCLASS_BATTERY,             0x72631e54L, 0x78a4, 0x11d0, 0xbc, 0xf7, 0x00, 0xaa, 0x00, 0xb7, 0xb3, 0x2a );
DEFINE_GUID( GUID_DEVCLASS_BIOMETRIC,           0x53d29ef7L, 0x377c, 0x4d14, 0x86, 0x4b, 0xeb, 0x3a, 0x85, 0x76, 0x93, 0x59 );
DEFINE_GUID( GUID_DEVCLASS_BLUETOOTH,           0xe0cbf06cL, 0xcd8b, 0x4647, 0xbb, 0x8a, 0x26, 0x3b, 0x43, 0xf0, 0xf9, 0x74 );
DEFINE_GUID( GUID_DEVCLASS_CAMERA,              0xca3e7ab9L, 0xb4c3, 0x4ae6, 0x82, 0x51, 0x57, 0x9e, 0xf9, 0x33, 0x89, 0x0f );
DEFINE_GUID( GUID_DEVCLASS_CDROM,               0x4d36e965L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_COMPUTEACCELERATOR,  0xf01a9d53L, 0x3ff6, 0x48d2, 0x9f, 0x97, 0xc8, 0xa7, 0x00, 0x4b, 0xe1, 0x0c );
DEFINE_GUID( GUID_DEVCLASS_COMPUTER,            0x4d36e966L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_DECODER,             0x6bdd1fc2L, 0x810f, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f );
DEFINE_GUID( GUID_DEVCLASS_DISKDRIVE,           0x4d36e967L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_DISPLAY,             0x4d36e968L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_DOT4,                0x48721b56L, 0x6795, 0x11d2, 0xb1, 0xa8, 0x00, 0x80, 0xc7, 0x2e, 0x74, 0xa2 );
DEFINE_GUID( GUID_DEVCLASS_DOT4PRINT,           0x49ce6ac8L, 0x6f86, 0x11d2, 0xb1, 0xe5, 0x00, 0x80, 0xc7, 0x2e, 0x74, 0xa2 );
DEFINE_GUID( GUID_DEVCLASS_EHSTORAGESILO,       0x9da2b80fL, 0xf89f, 0x4a49, 0xa5, 0xc2, 0x51, 0x1b, 0x08, 0x5b, 0x9e, 0x8a );
DEFINE_GUID( GUID_DEVCLASS_ENUM1394,            0xc459df55L, 0xdb08, 0x11d1, 0xb0, 0x09, 0x00, 0xa0, 0xc9, 0x08, 0x1f, 0xf6 );
DEFINE_GUID( GUID_DEVCLASS_EXTENSION,           0xe2f84ce7L, 0x8efa, 0x411c, 0xaa, 0x69, 0x97, 0x45, 0x4c, 0xa4, 0xcb, 0x57 );
DEFINE_GUID( GUID_DEVCLASS_FDC,                 0x4d36e969L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_FIRMWARE,            0xf2e7dd72L, 0x6468, 0x4e36, 0xb6, 0xf1, 0x64, 0x88, 0xf4, 0x2c, 0x1b, 0x52 );
DEFINE_GUID( GUID_DEVCLASS_FLOPPYDISK,          0x4d36e980L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_GENERIC,             0xff494df1L, 0xc4ed, 0x4fac, 0x9b, 0x3f, 0x37, 0x86, 0xf6, 0xe9, 0x1e, 0x7e );
DEFINE_GUID( GUID_DEVCLASS_GPS,                 0x6bdd1fc3L, 0x810f, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f );
DEFINE_GUID( GUID_DEVCLASS_HDC,                 0x4d36e96aL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_HIDCLASS,            0x745a17a0L, 0x74d3, 0x11d0, 0xb6, 0xfe, 0x00, 0xa0, 0xc9, 0x0f, 0x57, 0xda );
DEFINE_GUID( GUID_DEVCLASS_HOLOGRAPHIC,         0xd612553dL, 0x06b1, 0x49ca, 0x89, 0x38, 0xe3, 0x9e, 0xf8, 0x0e, 0xb1, 0x6f );
DEFINE_GUID( GUID_DEVCLASS_IMAGE,               0x6bdd1fc6L, 0x810f, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f );
DEFINE_GUID( GUID_DEVCLASS_INFINIBAND,          0x30ef7132L, 0xd858, 0x4a0c, 0xac, 0x24, 0xb9, 0x02, 0x8a, 0x5c, 0xca, 0x3f );
DEFINE_GUID( GUID_DEVCLASS_INFRARED,            0x6bdd1fc5L, 0x810f, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f );
DEFINE_GUID( GUID_DEVCLASS_KEYBOARD,            0x4d36e96bL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_LEGACYDRIVER,        0x8ecc055dL, 0x047f, 0x11d1, 0xa5, 0x37, 0x00, 0x00, 0xf8, 0x75, 0x3e, 0xd1 );
DEFINE_GUID( GUID_DEVCLASS_MEDIA,               0x4d36e96cL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_MEDIUM_CHANGER,      0xce5939aeL, 0xebde, 0x11d0, 0xb1, 0x81, 0x00, 0x00, 0xf8, 0x75, 0x3e, 0xc4 );
DEFINE_GUID( GUID_DEVCLASS_MEMORY,              0x5099944aL, 0xf6b9, 0x4057, 0xa0, 0x56, 0x8c, 0x55, 0x02, 0x28, 0x54, 0x4c );
DEFINE_GUID( GUID_DEVCLASS_MODEM,               0x4d36e96dL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_MONITOR,             0x4d36e96eL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_MOUSE,               0x4d36e96fL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_MTD,                 0x4d36e970L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_MULTIFUNCTION,       0x4d36e971L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_MULTIPORTSERIAL,     0x50906cb8L, 0xba12, 0x11d1, 0xbf, 0x5d, 0x00, 0x00, 0xf8, 0x05, 0xf5, 0x30 );
DEFINE_GUID( GUID_DEVCLASS_NET,                 0x4d36e972L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_NETCLIENT,           0x4d36e973L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_NETDRIVER,           0x87ef9ad1L, 0x8f70, 0x49ee, 0xb2, 0x15, 0xab, 0x1f, 0xca, 0xdc, 0xbe, 0x3c );
DEFINE_GUID( GUID_DEVCLASS_NETSERVICE,          0x4d36e974L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_NETTRANS,            0x4d36e975L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_NETUIO,              0x78912bc1L, 0xcb8e, 0x4b28, 0xa3, 0x29, 0xf3, 0x22, 0xeb, 0xad, 0xbe, 0x0f );
DEFINE_GUID( GUID_DEVCLASS_NODRIVER,            0x4d36e976L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_PCMCIA,              0x4d36e977L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_PNPPRINTERS,         0x4658ee7eL, 0xf050, 0x11d1, 0xb6, 0xbd, 0x00, 0xc0, 0x4f, 0xa3, 0x72, 0xa7 );
DEFINE_GUID( GUID_DEVCLASS_PORTS,               0x4d36e978L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_PRIMITIVE,           0x242681d1L, 0xeed3, 0x41d2, 0xa1, 0xef, 0x14, 0x68, 0xfc, 0x84, 0x31, 0x06 );
DEFINE_GUID( GUID_DEVCLASS_PRINTER,             0x4d36e979L, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_PRINTERUPGRADE,      0x4d36e97aL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_PRINTQUEUE,          0x1ed2bbf9L, 0x11f0, 0x4084, 0xb2, 0x1f, 0xad, 0x83, 0xa8, 0xe6, 0xdc, 0xdc );
DEFINE_GUID( GUID_DEVCLASS_PROCESSOR,           0x50127dc3L, 0x0f36, 0x415e, 0xa6, 0xcc, 0x4c, 0xb3, 0xbe, 0x91, 0x0B, 0x65 );
DEFINE_GUID( GUID_DEVCLASS_SBP2,                0xd48179beL, 0xec20, 0x11d1, 0xb6, 0xb8, 0x00, 0xc0, 0x4f, 0xa3, 0x72, 0xa7 );
DEFINE_GUID( GUID_DEVCLASS_SCMDISK,             0x53966cb1L, 0x4d46, 0x4166, 0xbf, 0x23, 0xc5, 0x22, 0x40, 0x3c, 0xd4, 0x95 );
DEFINE_GUID( GUID_DEVCLASS_SCMVOLUME,           0x53ccb149L, 0xe543, 0x4c84, 0xb6, 0xe0, 0xbc, 0xe4, 0xf6, 0xb7, 0xe8, 0x06 );
DEFINE_GUID( GUID_DEVCLASS_SCSIADAPTER,         0x4d36e97bL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_SECURITYACCELERATOR, 0x268c95a1L, 0xedfe, 0x11d3, 0x95, 0xc3, 0x00, 0x10, 0xdc, 0x40, 0x50, 0xa5 );
DEFINE_GUID( GUID_DEVCLASS_SENSOR,              0x5175d334L, 0xc371, 0x4806, 0xb3, 0xba, 0x71, 0xfd, 0x53, 0xc9, 0x25, 0x8d );
DEFINE_GUID( GUID_DEVCLASS_SIDESHOW,            0x997b5d8dL, 0xc442, 0x4f2e, 0xba, 0xf3, 0x9c, 0x8e, 0x67, 0x1e, 0x9e, 0x21 );
DEFINE_GUID( GUID_DEVCLASS_SMARTCARDREADER,     0x50dd5230L, 0xba8a, 0x11d1, 0xbf, 0x5d, 0x00, 0x00, 0xf8, 0x05, 0xf5, 0x30 );
DEFINE_GUID( GUID_DEVCLASS_SMRDISK,             0x53487c23L, 0x680f, 0x4585, 0xac, 0xc3, 0x1f, 0x10, 0xd6, 0x77, 0x7e, 0x82 );
DEFINE_GUID( GUID_DEVCLASS_SMRVOLUME,           0x53b3cf03L, 0x8f5a, 0x4788, 0x91, 0xb6, 0xd1, 0x9e, 0xd9, 0xfc, 0xcc, 0xbf );
DEFINE_GUID( GUID_DEVCLASS_SOFTWARECOMPONENT,   0x5c4c3332L, 0x344d, 0x483c, 0x87, 0x39, 0x25, 0x9e, 0x93, 0x4c, 0x9c, 0xc8 );
DEFINE_GUID( GUID_DEVCLASS_SOUND,               0x4d36e97cL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_SYSTEM,              0x4d36e97dL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_TAPEDRIVE,           0x6d807884L, 0x7d21, 0x11cf, 0x80, 0x1c, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_UNKNOWN,             0x4d36e97eL, 0xe325, 0x11ce, 0xbf, 0xc1, 0x08, 0x00, 0x2b, 0xe1, 0x03, 0x18 );
DEFINE_GUID( GUID_DEVCLASS_UCM,                 0xe6f1aa1cL, 0x7f3b, 0x4473, 0xb2, 0xe8, 0xc9, 0x7d, 0x8a, 0xc7, 0x1d, 0x53 );
DEFINE_GUID( GUID_DEVCLASS_USB,                 0x36fc9e60L, 0xc465, 0x11cf, 0x80, 0x56, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00 );
DEFINE_GUID( GUID_DEVCLASS_VOLUME,              0x71a27cddL, 0x812a, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f );
DEFINE_GUID( GUID_DEVCLASS_VOLUMESNAPSHOT,      0x533c5b84L, 0xec70, 0x11d2, 0x95, 0x05, 0x00, 0xc0, 0x4f, 0x79, 0xde, 0xaf );
DEFINE_GUID( GUID_DEVCLASS_WCEUSBS,             0x25dbce51L, 0x6c8f, 0x4a72, 0x8a, 0x6d, 0xb5, 0x4c, 0x2b, 0x4f, 0xc8, 0x35 );
DEFINE_GUID( GUID_DEVCLASS_WPD,                 0xeec5ad98L, 0x8080, 0x425f, 0x92, 0x2a, 0xda, 0xbf, 0x3d, 0xe3, 0xf6, 0x9a );

//
// Define filesystem filter classes used for classification and load ordering.
// Classes are listed below in order from "highest" (i.e., farthest from the
// filesystem) to "lowest" (i.e., closest to the filesystem).
//
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_TOP,                     0xb369baf4L, 0x5568, 0x4e82, 0xa8, 0x7e, 0xa9, 0x3e, 0xb1, 0x6b, 0xca, 0x87 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_ACTIVITYMONITOR,         0xb86dff51L, 0xa31e, 0x4bac, 0xb3, 0xcf, 0xe8, 0xcf, 0xe7, 0x5c, 0x9f, 0xc2 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_UNDELETE,                0xfe8f1572L, 0xc67a, 0x48c0, 0xbb, 0xac, 0x0b, 0x5c, 0x6d, 0x66, 0xca, 0xfb );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_ANTIVIRUS,               0xb1d1a169L, 0xc54f, 0x4379, 0x81, 0xdb, 0xbe, 0xe7, 0xd8, 0x8d, 0x74, 0x54 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_REPLICATION,             0x48d3ebc4L, 0x4cf8, 0x48ff, 0xb8, 0x69, 0x9c, 0x68, 0xad, 0x42, 0xeb, 0x9f );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_CONTINUOUSBACKUP,        0x71aa14f8L, 0x6fad, 0x4622, 0xad, 0x77, 0x92, 0xbb, 0x9d, 0x7e, 0x69, 0x47 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_CONTENTSCREENER,         0x3e3f0674L, 0xc83c, 0x4558, 0xbb, 0x26, 0x98, 0x20, 0xe1, 0xeb, 0xa5, 0xc5 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_QUOTAMANAGEMENT,         0x8503c911L, 0xa6c7, 0x4919, 0x8f, 0x79, 0x50, 0x28, 0xf5, 0x86, 0x6b, 0x0c );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_SYSTEMRECOVERY,          0x2db15374L, 0x706e, 0x4131, 0xa0, 0xc7, 0xd7, 0xc7, 0x8e, 0xb0, 0x28, 0x9a );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_CFSMETADATASERVER,       0xcdcf0939L, 0xb75b, 0x4630, 0xbf, 0x76, 0x80, 0xf7, 0xba, 0x65, 0x58, 0x84 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_HSM,                     0xd546500aL, 0x2aeb, 0x45f6, 0x94, 0x82, 0xf4, 0xb1, 0x79, 0x9c, 0x31, 0x77 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_COMPRESSION,             0xf3586bafL, 0xb5aa, 0x49b5, 0x8d, 0x6c, 0x05, 0x69, 0x28, 0x4c, 0x63, 0x9f );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_ENCRYPTION,              0xa0a701c0L, 0xa511, 0x42ff, 0xaa, 0x6c, 0x06, 0xdc, 0x03, 0x95, 0x57, 0x6f );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_VIRTUALIZATION,          0xf75a86c0L, 0x10d8, 0x4c3a, 0xb2, 0x33, 0xed, 0x60, 0xe4, 0xcd, 0xfa, 0xac );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_PHYSICALQUOTAMANAGEMENT, 0x6a0a8e78L, 0xbba6, 0x4fc4, 0xa7, 0x09, 0x1e, 0x33, 0xcd, 0x09, 0xd6, 0x7e );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_OPENFILEBACKUP,          0xf8ecafa6L, 0x66d1, 0x41a5, 0x89, 0x9b, 0x66, 0x58, 0x5d, 0x72, 0x16, 0xb7 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_SECURITYENHANCER,        0xd02bc3daL, 0x0c8e, 0x4945, 0x9b, 0xd5, 0xf1, 0x88, 0x3c, 0x22, 0x6c, 0x8c );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_COPYPROTECTION,          0x89786ff1L, 0x9c12, 0x402f, 0x9c, 0x9e, 0x17, 0x75, 0x3c, 0x7f, 0x43, 0x75 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_BOTTOM,                  0x37765ea0L, 0x5958, 0x4fc9, 0xb0, 0x4b, 0x2f, 0xdf, 0xef, 0x97, 0xe5, 0x9e );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_SYSTEM,                  0x5d1b9aaaL, 0x01e2, 0x46af, 0x84, 0x9f, 0x27, 0x2b, 0x3f, 0x32, 0x4c, 0x46 );
DEFINE_GUID( GUID_DEVCLASS_FSFILTER_INFRASTRUCTURE,          0xe55fa6f9L, 0x128c, 0x4d04, 0xab, 0xab, 0x63, 0x0c, 0x74, 0xb1, 0x45, 0x3a );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

