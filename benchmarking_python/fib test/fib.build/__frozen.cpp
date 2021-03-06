// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

// Blob from which modules are unstreamed.
#if defined(_WIN32) && defined(_NUITKA_EXE)
extern const unsigned char* constant_bin;
#else
extern "C" const unsigned char constant_bin[];
#endif

#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

void copyFrozenModulesTo( void* destination )
{
    _frozen frozen_modules[] = {
        { (char *)"base64", (unsigned char *)&constant_bin[ 6360023 ], 11253 },
        { (char *)"codecs", (unsigned char *)&constant_bin[ 6371276 ], 36646 },
        { (char *)"copy_reg", (unsigned char *)&constant_bin[ 6407922 ], 5083 },
        { (char *)"encodings", (unsigned char *)&constant_bin[ 6413005 ], -4362 },
        { (char *)"encodings.aliases", (unsigned char *)&constant_bin[ 6417367 ], 8760 },
        { (char *)"encodings.ascii", (unsigned char *)&constant_bin[ 6426127 ], 2253 },
        { (char *)"encodings.base64_codec", (unsigned char *)&constant_bin[ 6428380 ], 3829 },
        { (char *)"encodings.big5", (unsigned char *)&constant_bin[ 6432209 ], 1748 },
        { (char *)"encodings.big5hkscs", (unsigned char *)&constant_bin[ 6433957 ], 1788 },
        { (char *)"encodings.bz2_codec", (unsigned char *)&constant_bin[ 6435745 ], 4721 },
        { (char *)"encodings.charmap", (unsigned char *)&constant_bin[ 6440466 ], 3465 },
        { (char *)"encodings.cp037", (unsigned char *)&constant_bin[ 6443931 ], 2829 },
        { (char *)"encodings.cp1006", (unsigned char *)&constant_bin[ 6446760 ], 2915 },
        { (char *)"encodings.cp1026", (unsigned char *)&constant_bin[ 6449675 ], 2843 },
        { (char *)"encodings.cp1140", (unsigned char *)&constant_bin[ 6452518 ], 2829 },
        { (char *)"encodings.cp1250", (unsigned char *)&constant_bin[ 6455347 ], 2866 },
        { (char *)"encodings.cp1251", (unsigned char *)&constant_bin[ 6458213 ], 2863 },
        { (char *)"encodings.cp1252", (unsigned char *)&constant_bin[ 6461076 ], 2866 },
        { (char *)"encodings.cp1253", (unsigned char *)&constant_bin[ 6463942 ], 2879 },
        { (char *)"encodings.cp1254", (unsigned char *)&constant_bin[ 6466821 ], 2868 },
        { (char *)"encodings.cp1255", (unsigned char *)&constant_bin[ 6469689 ], 2887 },
        { (char *)"encodings.cp1256", (unsigned char *)&constant_bin[ 6472576 ], 2865 },
        { (char *)"encodings.cp1257", (unsigned char *)&constant_bin[ 6475441 ], 2873 },
        { (char *)"encodings.cp1258", (unsigned char *)&constant_bin[ 6478314 ], 2871 },
        { (char *)"encodings.cp424", (unsigned char *)&constant_bin[ 6481185 ], 2859 },
        { (char *)"encodings.cp437", (unsigned char *)&constant_bin[ 6484044 ], 8064 },
        { (char *)"encodings.cp500", (unsigned char *)&constant_bin[ 6492108 ], 2829 },
        { (char *)"encodings.cp720", (unsigned char *)&constant_bin[ 6494937 ], 2926 },
        { (char *)"encodings.cp737", (unsigned char *)&constant_bin[ 6497863 ], 8292 },
        { (char *)"encodings.cp775", (unsigned char *)&constant_bin[ 6506155 ], 8078 },
        { (char *)"encodings.cp850", (unsigned char *)&constant_bin[ 6514233 ], 7811 },
        { (char *)"encodings.cp852", (unsigned char *)&constant_bin[ 6522044 ], 8080 },
        { (char *)"encodings.cp855", (unsigned char *)&constant_bin[ 6530124 ], 8261 },
        { (char *)"encodings.cp856", (unsigned char *)&constant_bin[ 6538385 ], 2891 },
        { (char *)"encodings.cp857", (unsigned char *)&constant_bin[ 6541276 ], 7801 },
        { (char *)"encodings.cp858", (unsigned char *)&constant_bin[ 6549077 ], 7781 },
        { (char *)"encodings.cp860", (unsigned char *)&constant_bin[ 6556858 ], 8047 },
        { (char *)"encodings.cp861", (unsigned char *)&constant_bin[ 6564905 ], 8058 },
        { (char *)"encodings.cp862", (unsigned char *)&constant_bin[ 6572963 ], 8193 },
        { (char *)"encodings.cp863", (unsigned char *)&constant_bin[ 6581156 ], 8058 },
        { (char *)"encodings.cp864", (unsigned char *)&constant_bin[ 6589214 ], 8189 },
        { (char *)"encodings.cp865", (unsigned char *)&constant_bin[ 6597403 ], 8058 },
        { (char *)"encodings.cp866", (unsigned char *)&constant_bin[ 6605461 ], 8293 },
        { (char *)"encodings.cp869", (unsigned char *)&constant_bin[ 6613754 ], 8105 },
        { (char *)"encodings.cp874", (unsigned char *)&constant_bin[ 6621859 ], 2957 },
        { (char *)"encodings.cp875", (unsigned char *)&constant_bin[ 6624816 ], 2826 },
        { (char *)"encodings.cp932", (unsigned char *)&constant_bin[ 6627642 ], 1756 },
        { (char *)"encodings.cp949", (unsigned char *)&constant_bin[ 6629398 ], 1756 },
        { (char *)"encodings.cp950", (unsigned char *)&constant_bin[ 6631154 ], 1756 },
        { (char *)"encodings.euc_jis_2004", (unsigned char *)&constant_bin[ 6632910 ], 1812 },
        { (char *)"encodings.euc_jisx0213", (unsigned char *)&constant_bin[ 6634722 ], 1812 },
        { (char *)"encodings.euc_jp", (unsigned char *)&constant_bin[ 6636534 ], 1764 },
        { (char *)"encodings.euc_kr", (unsigned char *)&constant_bin[ 6638298 ], 1764 },
        { (char *)"encodings.gb18030", (unsigned char *)&constant_bin[ 6640062 ], 1772 },
        { (char *)"encodings.gb2312", (unsigned char *)&constant_bin[ 6641834 ], 1764 },
        { (char *)"encodings.gbk", (unsigned char *)&constant_bin[ 6643598 ], 1740 },
        { (char *)"encodings.hex_codec", (unsigned char *)&constant_bin[ 6645338 ], 3781 },
        { (char *)"encodings.hp_roman8", (unsigned char *)&constant_bin[ 6649119 ], 4112 },
        { (char *)"encodings.hz", (unsigned char *)&constant_bin[ 6653231 ], 1732 },
        { (char *)"encodings.idna", (unsigned char *)&constant_bin[ 6654963 ], 6368 },
        { (char *)"encodings.iso2022_jp", (unsigned char *)&constant_bin[ 6661331 ], 1801 },
        { (char *)"encodings.iso2022_jp_1", (unsigned char *)&constant_bin[ 6663132 ], 1817 },
        { (char *)"encodings.iso2022_jp_2", (unsigned char *)&constant_bin[ 6664949 ], 1817 },
        { (char *)"encodings.iso2022_jp_2004", (unsigned char *)&constant_bin[ 6666766 ], 1841 },
        { (char *)"encodings.iso2022_jp_3", (unsigned char *)&constant_bin[ 6668607 ], 1817 },
        { (char *)"encodings.iso2022_jp_ext", (unsigned char *)&constant_bin[ 6670424 ], 1833 },
        { (char *)"encodings.iso2022_kr", (unsigned char *)&constant_bin[ 6672257 ], 1801 },
        { (char *)"encodings.iso8859_1", (unsigned char *)&constant_bin[ 6674058 ], 2868 },
        { (char *)"encodings.iso8859_10", (unsigned char *)&constant_bin[ 6676926 ], 2883 },
        { (char *)"encodings.iso8859_11", (unsigned char *)&constant_bin[ 6679809 ], 2977 },
        { (char *)"encodings.iso8859_13", (unsigned char *)&constant_bin[ 6682786 ], 2886 },
        { (char *)"encodings.iso8859_14", (unsigned char *)&constant_bin[ 6685672 ], 2904 },
        { (char *)"encodings.iso8859_15", (unsigned char *)&constant_bin[ 6688576 ], 2883 },
        { (char *)"encodings.iso8859_16", (unsigned char *)&constant_bin[ 6691459 ], 2885 },
        { (char *)"encodings.iso8859_2", (unsigned char *)&constant_bin[ 6694344 ], 2868 },
        { (char *)"encodings.iso8859_3", (unsigned char *)&constant_bin[ 6697212 ], 2875 },
        { (char *)"encodings.iso8859_4", (unsigned char *)&constant_bin[ 6700087 ], 2868 },
        { (char *)"encodings.iso8859_5", (unsigned char *)&constant_bin[ 6702955 ], 2869 },
        { (char *)"encodings.iso8859_6", (unsigned char *)&constant_bin[ 6705824 ], 2913 },
        { (char *)"encodings.iso8859_7", (unsigned char *)&constant_bin[ 6708737 ], 2876 },
        { (char *)"encodings.iso8859_8", (unsigned char *)&constant_bin[ 6711613 ], 2907 },
        { (char *)"encodings.iso8859_9", (unsigned char *)&constant_bin[ 6714520 ], 2868 },
        { (char *)"encodings.johab", (unsigned char *)&constant_bin[ 6717388 ], 1756 },
        { (char *)"encodings.koi8_r", (unsigned char *)&constant_bin[ 6719144 ], 2890 },
        { (char *)"encodings.koi8_u", (unsigned char *)&constant_bin[ 6722034 ], 2876 },
        { (char *)"encodings.latin_1", (unsigned char *)&constant_bin[ 6724910 ], 2283 },
        { (char *)"encodings.mac_arabic", (unsigned char *)&constant_bin[ 6727193 ], 8014 },
        { (char *)"encodings.mac_centeuro", (unsigned char *)&constant_bin[ 6735207 ], 2937 },
        { (char *)"encodings.mac_croatian", (unsigned char *)&constant_bin[ 6738144 ], 2945 },
        { (char *)"encodings.mac_cyrillic", (unsigned char *)&constant_bin[ 6741089 ], 2935 },
        { (char *)"encodings.mac_farsi", (unsigned char *)&constant_bin[ 6744024 ], 2849 },
        { (char *)"encodings.mac_greek", (unsigned char *)&constant_bin[ 6746873 ], 2889 },
        { (char *)"encodings.mac_iceland", (unsigned char *)&constant_bin[ 6749762 ], 2928 },
        { (char *)"encodings.mac_latin2", (unsigned char *)&constant_bin[ 6752690 ], 4907 },
        { (char *)"encodings.mac_roman", (unsigned char *)&constant_bin[ 6757597 ], 2906 },
        { (char *)"encodings.mac_romanian", (unsigned char *)&constant_bin[ 6760503 ], 2946 },
        { (char *)"encodings.mac_turkish", (unsigned char *)&constant_bin[ 6763449 ], 2929 },
        { (char *)"encodings.palmos", (unsigned char *)&constant_bin[ 6766378 ], 3066 },
        { (char *)"encodings.ptcp154", (unsigned char *)&constant_bin[ 6769444 ], 4890 },
        { (char *)"encodings.punycode", (unsigned char *)&constant_bin[ 6774334 ], 7980 },
        { (char *)"encodings.quopri_codec", (unsigned char *)&constant_bin[ 6782314 ], 3647 },
        { (char *)"encodings.raw_unicode_escape", (unsigned char *)&constant_bin[ 6785961 ], 2202 },
        { (char *)"encodings.rot_13", (unsigned char *)&constant_bin[ 6788163 ], 3656 },
        { (char *)"encodings.shift_jis", (unsigned char *)&constant_bin[ 6791819 ], 1788 },
        { (char *)"encodings.shift_jis_2004", (unsigned char *)&constant_bin[ 6793607 ], 1828 },
        { (char *)"encodings.shift_jisx0213", (unsigned char *)&constant_bin[ 6795435 ], 1828 },
        { (char *)"encodings.string_escape", (unsigned char *)&constant_bin[ 6797263 ], 2061 },
        { (char *)"encodings.tis_620", (unsigned char *)&constant_bin[ 6799324 ], 2938 },
        { (char *)"encodings.undefined", (unsigned char *)&constant_bin[ 6802262 ], 2589 },
        { (char *)"encodings.unicode_escape", (unsigned char *)&constant_bin[ 6804851 ], 2150 },
        { (char *)"encodings.unicode_internal", (unsigned char *)&constant_bin[ 6807001 ], 2176 },
        { (char *)"encodings.utf_16", (unsigned char *)&constant_bin[ 6809177 ], 5160 },
        { (char *)"encodings.utf_16_be", (unsigned char *)&constant_bin[ 6814337 ], 1990 },
        { (char *)"encodings.utf_16_le", (unsigned char *)&constant_bin[ 6816327 ], 1990 },
        { (char *)"encodings.utf_32", (unsigned char *)&constant_bin[ 6818317 ], 5724 },
        { (char *)"encodings.utf_32_be", (unsigned char *)&constant_bin[ 6824041 ], 1883 },
        { (char *)"encodings.utf_32_le", (unsigned char *)&constant_bin[ 6825924 ], 1883 },
        { (char *)"encodings.utf_7", (unsigned char *)&constant_bin[ 6827807 ], 1883 },
        { (char *)"encodings.utf_8", (unsigned char *)&constant_bin[ 6829690 ], 1942 },
        { (char *)"encodings.utf_8_sig", (unsigned char *)&constant_bin[ 6831632 ], 4977 },
        { (char *)"encodings.uu_codec", (unsigned char *)&constant_bin[ 6836609 ], 4909 },
        { (char *)"encodings.zlib_codec", (unsigned char *)&constant_bin[ 6841518 ], 4641 },
        { (char *)"functools", (unsigned char *)&constant_bin[ 6846159 ], 6029 },
        { (char *)"locale", (unsigned char *)&constant_bin[ 6852188 ], 54994 },
        { (char *)"quopri", (unsigned char *)&constant_bin[ 6907182 ], 6544 },
        { (char *)"re", (unsigned char *)&constant_bin[ 6913726 ], 13363 },
        { (char *)"sre_compile", (unsigned char *)&constant_bin[ 6927089 ], 12521 },
        { (char *)"sre_constants", (unsigned char *)&constant_bin[ 6939610 ], 6177 },
        { (char *)"sre_parse", (unsigned char *)&constant_bin[ 6945787 ], 19937 },
        { (char *)"string", (unsigned char *)&constant_bin[ 6965724 ], 20349 },
        { (char *)"stringprep", (unsigned char *)&constant_bin[ 6986073 ], 14441 },
        { (char *)"struct", (unsigned char *)&constant_bin[ 7000514 ], 229 },
        { (char *)"types", (unsigned char *)&constant_bin[ 7000743 ], 2703 },
        { NULL, NULL, 0 }
    };

    memcpy(
        destination,
        frozen_modules,
        ( _NUITKA_FROZEN + 1 ) * sizeof( struct _frozen )
    );
}
