add_lldb_library(lldbPluginProcessOpenBSD
  NativeProcessOpenBSD.cpp
  NativeRegisterContextOpenBSD.cpp
  NativeRegisterContextOpenBSD_arch.cpp
  NativeThreadOpenBSD.cpp

  LINK_LIBS
    lldbCore
    lldbHost
    lldbSymbol
    lldbTarget
    lldbUtility
    lldbPluginProcessPOSIX
    lldbPluginProcessUtility
  LINK_COMPONENTS
    Support
  )
