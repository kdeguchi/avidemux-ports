--- avidemux_core/cmake/admMainChecks.cmake.orig	2025-01-09 23:01:47 UTC
+++ avidemux_core/cmake/admMainChecks.cmake
@@ -111,7 +111,7 @@ IF(CMAKE_COMPILER_IS_GNUCC)
 ENDIF()
 
 IF(CMAKE_COMPILER_IS_GNUCC)
-  ADD_DEFINITIONS("-Werror=attributes")
+  ADD_DEFINITIONS("-Wattributes")
 ENDIF()
 
 IF(NOT MSVC AND CMAKE_BUILD_TYPE STREQUAL "Release")
