/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"


@protocol ABPeoplePickerNavigationControllerPrivateMemberCellDelegate <ABPeoplePickerNavigationControllerDelegate>
@optional
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier withMemberCell:(id)memberCell;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person withLinkedPeople:(CFArrayRef)linkedPeople memberCell:(id)cell;
@end

