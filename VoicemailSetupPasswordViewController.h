/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface VoicemailSetupPasswordViewController : XXUnknownSuperclass {
	unsigned _confirmingPassword : 1;
	unsigned _minPasswordLength;
	unsigned _maxPasswordLength;
	NSString* _password;
}
-(void)voicemailPasscodeView:(id)view valueDidChange:(id)value;
-(void)_saveButtonClicked:(id)clicked;
-(void)_showDefaultPasswordPrompt;
-(void)verifyPasswordConfirmation;
-(void)viewWillAppear:(BOOL)view;
-(void)_cancelButtonClicked:(id)clicked;
-(void)loadView;
-(void)_updateNavBarButtons;
-(void)applicationDidResume;
-(void)dealloc;
-(id)init;
@end
