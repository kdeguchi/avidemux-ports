--- avidemux_core/ADM_core/include/ADM_assert.h.orig	2025-01-09 23:01:47 UTC
+++ avidemux_core/ADM_core/include/ADM_assert.h
@@ -69,7 +69,7 @@ extern "C"
     /* */
     ADM_CORE6_EXPORT void ADM_usleep(unsigned long us);
 
-#ifndef __APPLE__
+#if !defined(__APPLE__) || !defined(__FreeBSD__)
     typedef void *(*adm_fast_memcpy)(void *to, const void *from, size_t len);
     extern ADM_CORE6_EXPORT adm_fast_memcpy myAdmMemcpy;
 #endif
@@ -82,7 +82,7 @@ extern "C"
 #define fopen ADM_fopen
 #define fclose ADM_fclose
 
-#if defined(__APPLE__) || defined(_WIN64) || defined(__HAIKU__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(_WIN64) || defined(__HAIKU__)
 #define NO_ADM_MEMCHECK
 #endif
 
