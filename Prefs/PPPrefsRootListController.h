#import <Preferences/PSListController.h>
#import <Cephei/HBRespringController.h>
#import <CepheiPrefs/HBRootListController.h>

@interface PPPrefsRootListController : HBRootListController

@property (nonatomic, retain) UIBarButtonItem *respringButton;

- (void)respring:(id)sender;
- (void)resetPrefs:(id)sender;

@end
