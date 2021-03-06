import '../QtModule.qbs' as QtModule

QtModule {
    qtModuleName: "QmlModels"
    Depends { name: "Qt"; submodules: ["core-private","qml-private","qmlmodels"]}

    architectures: ["x86_64"]
    targetPlatform: "windows"
    hasLibrary: false
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
    libNameForLinkerDebug: undefined
    libNameForLinkerRelease: undefined
    libFilePathDebug: undefined
    libFilePathRelease: undefined
    pluginTypes: []
    moduleConfig: []
    cpp.defines: []
    cpp.includePaths: ["C:/Qt/5.14.1/msvc2017_64/include/QtQmlModels/5.14.1","C:/Qt/5.14.1/msvc2017_64/include/QtQmlModels/5.14.1/QtQmlModels"]
    cpp.libraryPaths: []
    
}
