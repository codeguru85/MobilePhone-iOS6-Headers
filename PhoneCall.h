/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSString;

__attribute__((visibility("hidden")))
@interface PhoneCall : XXUnknownSuperclass {
	CTCallRef _call;
	NSString* _displayName;
	NSString* _overrideName;
	int _displayNameBreakPoint;
	int _abUid;
	NSString* _abLabel;
	UIImage* _image;
	struct {
		unsigned imageType : 2;
		unsigned abUidIsValid : 1;
		unsigned dialAssisted : 1;
		unsigned dialedFromEmergencyUI : 1;
		unsigned isEmergencyCall : 1;
		unsigned joiningConference : 1;
		unsigned leavingConference : 1;
	} _phoneCallFlags;
}
+(id)phoneCallForCall:(CTCallRef)call;
-(void)phoneApplicationAddressBookChangedNotification:(id)notification;
-(id)smallImage;
-(id)desktopImage;
-(id)_image;
-(BOOL)isEmergencyCall;
-(void)setWasDialedFromEmergencyUI:(BOOL)emergencyUI;
-(BOOL)wasDialedFromEmergencyUI;
-(void)setWasDialAssisted:(BOOL)assisted;
-(BOOL)wasDialAssisted;
-(void)setOverrideName:(id)name;
-(id)localizedLabel;
-(id)multiLineDisplayName;
-(id)displayName;
-(id)_displayNameWithSeparator:(id)separator;
-(int)abUID;
-(id)number;
-(void)disconnect;
-(void)leaveConference;
-(void)joinConference;
-(BOOL)isConferenced;
-(BOOL)unhold;
-(BOOL)hold;
-(BOOL)isVoicemail;
-(BOOL)isAlerting;
-(int)status;
-(CTCallRef)call;
-(void)_handleStatusChange;
-(void)_handleCallerIDChange;
-(void)_handleIdentityChange;
-(int)_addressBookUid;
-(void)dealloc;
-(id)initWithCall:(CTCallRef)call;
@end
