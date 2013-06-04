/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PhoneBaseViewController.h"
#import "CommunicationDisplayViewController.h"

@class CNFCallViewController;

__attribute__((visibility("hidden")))
@interface VideoConferenceController : CommunicationDisplayViewController <PhoneBaseViewController> {
	CNFCallViewController* _faceTimeCallViewController;
}
@property(readonly, assign, nonatomic) CNFCallViewController* faceTimeCallViewController;
+(int)statusBarStyle;
+(id)defaultPNGName;
+(int)viewType;
-(BOOL)shouldHideStatusBar;
-(BOOL)isShowingFaceTimeUI;
-(void)resetToFullScreenPreview;
-(void)setIsSendingVideo:(BOOL)video;
-(void)stopPreview;
-(void)startPreview;
-(void)cleanUpForIncomingCall;
-(void)cleanUpVideoConference;
-(void)slideBarsInAnimated:(BOOL)animated;
-(void)fadeInAnimated:(BOOL)animated completionBlock:(id)block;
-(void)fadeOutAnimated:(BOOL)animated completionBlock:(id)block;
-(void)faceTimeEndedWhileSuspending;
-(void)faceTimeEnded;
-(void)restoreInCallUIAndAudioRoute;
-(void)_restoreInCallUIAndAudioRoute;
-(void)animateOutOfCallWaitingAlert;
-(void)animateToCallWaitingAlert;
-(BOOL)isCallWaitingViewVisible;
-(void)_handleInvitation:(id)invitation;
-(void)transitionFromLockScreenAnimated:(BOOL)lockScreenAnimated;
-(void)transitionToLockScreenAnimated:(BOOL)lockScreenAnimated;
-(void)_didFinishLocking;
-(id)_lockScreenImageView;
-(BOOL)isShowingLock;
-(void)handleURL:(id)url;
-(void)prepareToHandleURL:(id)handleURL;
-(void)_applicationReactivated:(id)reactivated;
-(void)prepareForSnapshot;
-(BOOL)shouldSnapshot;
-(BOOL)shouldDisableEdgeClip;
-(void)dealloc;
-(void)unloadViewForced:(BOOL)forced;
-(void)didReceiveMemoryWarning;
-(void)viewDidUnload;
-(void)loadView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)updateViewControllerForOrientation:(int)orientation;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)_ensureFaceTimeCallViewControllerExists;
-(id)init;
@end

