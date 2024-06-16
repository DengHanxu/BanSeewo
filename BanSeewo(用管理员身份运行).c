#include <stdlib.h>

#define BAN(name) system("reg add \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\" name "\" /v debugger /t REG_SZ /d / /f");\
                  system("taskkill /f /im \"" name "\"");

int main(void)
{
    BAN("SeewoHugoLauncher.exe");
    BAN("proxyLayerService.exe");
    BAN("SeewoAbility.exe");
    BAN("liveClient.exe");
    BAN("resolution.exe");
    BAN("SeewoCore.exe");
    BAN("media_capture.exe");
    BAN("rtcRemoteDesktop.exe");
    BAN("screenCapture.exe");
    BAN("BlueScreenView.exe");
    BAN("CoverShutdown.exe");
    BAN("InjectAdapter.exe");
    BAN("Injector.exe");
    BAN("Installer.exe");
    BAN("ReserveFileUI.exe");
    BAN("SeewoFreezeUI.exe");
    BAN("SeewoFreezeUpdateAssist.exe");
    BAN("SendEmail.exe");
    BAN("split.exe");
    BAN("tracepdb.exe");
    BAN("Injector.exe");
    BAN("tracepdb.exe");
    BAN("SeewoServiceAssistant.exe");
    
    return 0;
}
