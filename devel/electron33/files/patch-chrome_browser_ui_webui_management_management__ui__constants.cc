--- chrome/browser/ui/webui/management/management_ui_constants.cc.orig	2024-10-16 21:31:03 UTC
+++ chrome/browser/ui/webui/management/management_ui_constants.cc
@@ -88,12 +88,12 @@ const char kProfileReportingPolicy[] = "profileReporti
 const char kProfileReportingExtension[] = "profileReportingExtension";
 const char kProfileReportingPolicy[] = "profileReportingPolicy";
 
-#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 const char kManagementScreenCaptureEvent[] = "managementScreenCaptureEvent";
 const char kManagementScreenCaptureData[] = "managementScreenCaptureData";
 #endif  // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_LINUX)
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 const char kManagementDeviceSignalsDisclosure[] =
     "managementDeviceSignalsDisclosure";
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
