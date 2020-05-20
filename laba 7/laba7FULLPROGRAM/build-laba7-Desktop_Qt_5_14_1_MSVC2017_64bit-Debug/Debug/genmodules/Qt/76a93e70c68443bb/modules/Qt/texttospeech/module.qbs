import '../QtModule.qbs' as QtModule

QtModule {
    qtModuleName: "TextToSpeech"
    Depends { name: "Qt"; submodules: ["core"]}

    architectures: ["x86_64"]
    targetPlatform: "windows"
    hasLibrary: true
    staticLibsDebug: []
    staticLibsRelease: []
    dynamicLibsDebug: []
    dynamicLibsRelease: []
    linkerFlagsDebug: []
    linkerFlagsRelease: []
    frameworksDebug: []
    frameworksRelease: []
    frameworkPathsDebug: []
    frameworkPathsRelease: []
    libNameForLinkerDebug: "Qt5TextToSpeechd.lib"
    libNameForLinkerRelease: "Qt5TextToSpeech.lib"
    libFilePathDebug: "C:/Qt/5.14.1/msvc2017_64/lib/Qt5TextToSpeechd.lib"
    libFilePathRelease: "C:/Qt/5.14.1/msvc2017_64/lib/Qt5TextToSpeech.lib"
    pluginTypes: ["texttospeech"]
    moduleConfig: ["lex","yacc","depend_includepath","testcase_targets","import_plugins","import_qpa_plugin","windows","qt_build_extra","file_copies","qmake_use","qt","warn_on","release","link_prl","flat","debug_and_release","autogen_precompile_source","embed_manifest_dll","embed_manifest_exe","shared","shared","release","no_plugin_manifest","win32","msvc","copy_dir_files","sse2","aesni","sse3","ssse3","sse4_1","sse4_2","avx","avx2","avx512f","avx512bw","avx512cd","avx512dq","avx512er","avx512ifma","avx512pf","avx512vbmi","avx512vl","compile_examples","f16c","force_debug_info","largefile","rdrnd","shani","x86SimdAlways","prefix_build","force_independent","utf8_source","create_prl","link_prl","prepare_docs","qt_docs_targets","no_private_qt_headers_warning","QTDIR_build","qt_example_installs","exceptions_off","testcase_exceptions","qt_example_installs","warning_clean","release","ReleaseBuild","Release","build_pass","c++11","release","ReleaseBuild","Release","build_pass","generated_privates","relative_qt_rpath","git_build","target_qt","c++11","strict_c++","c++14","c++1z","qt_install_headers","need_fwd_pri","qt_install_module","debug_and_release","build_all","create_cmake","skip_target_version_ext","release","ReleaseBuild","Release","build_pass","have_target","dll","exclusive_builds","debug_info","no_autoqmake","thread","moc","resources"]
    cpp.defines: ["QT_TEXTTOSPEECH_LIB"]
    cpp.includePaths: ["C:/Qt/5.14.1/msvc2017_64/include","C:/Qt/5.14.1/msvc2017_64/include/QtTextToSpeech"]
    cpp.libraryPaths: []
    Group {
        files: [Qt["texttospeech"].libFilePath]
        filesAreTargets: true
        fileTags: ["dynamiclibrary_import"]
    }
}