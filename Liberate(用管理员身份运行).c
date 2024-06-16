#include <stdlib.h>

#define LIBERATE(name) system("reg delete \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\" name "\" /f");\

int main(void)
{
    LIBERATE("SeewoHugoLauncher.exe");
    LIBERATE("proxyLayerService.exe");
    LIBERATE("SeewoAbility.exe");
    LIBERATE("liveClient.exe");
    LIBERATE("resolution.exe");
    LIBERATE("SeewoCore.exe");
    LIBERATE("media_capture.exe");
    LIBERATE("rtcRemoteDesktop.exe");
    LIBERATE("screenCapture.exe");
    LIBERATE("BlueScreenView.exe");
    LIBERATE("CoverShutdown.exe");
    LIBERATE("InjectAdapter.exe");
    LIBERATE("Injector.exe");
    LIBERATE("Installer.exe");
    LIBERATE("ReserveFileUI.exe");
    LIBERATE("SeewoFreezeUI.exe");
    LIBERATE("SeewoFreezeUpdateAssist.exe");
    LIBERATE("SendEmail.exe");
    LIBERATE("split.exe");
    LIBERATE("tracepdb.exe");
    LIBERATE("Injector.exe");
    LIBERATE("tracepdb.exe");
    LIBERATE("SeewoServiceAssistant.exe");
    
    return 0;
}
