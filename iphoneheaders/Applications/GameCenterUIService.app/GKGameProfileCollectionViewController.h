/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <GameCenterUI/GKCollectionViewController.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol GKGameProfileCollectionViewControllerServiceDelegate;
@class GKGameRecord, GKGameRecommendationInternal, NSString, UICollectionReusableView, GKCollectionViewDataSource, GKLeaderboardScoresDataSource, GKSectionHeaderView, GKAchievementsDataSource, GKCollectionViewAggregateDataSource, GKFriendPlayersDataSource, GKGameRecentPlayersDataSource, GKChallengesDataSource, GKSegmentedSectionDataSource, GKSupplementaryViewMetrics, NSArray, UIPopoverController, UIActionSheet, UIActivityViewController;

@interface GKGameProfileCollectionViewController : GKCollectionViewController <UIViewControllerRestoration, UIActionSheetDelegate, UIPopoverControllerDelegate> {

	BOOL _purchasableGame;
	BOOL _shouldUpdateShowcaseRowInUpdateMetrics;
	BOOL _firstAppearance;
	BOOL _hideHeaderOnRotationToLandscape;
	<GKGameProfileCollectionViewControllerServiceDelegate>* _serviceDelegateWeak;
	GKGameRecord* _game;
	GKGameRecommendationInternal* _recommendation;
	int _viewState;
	NSString* _leaderboardIdentifier;
	int _leaderboardTimeScope;
	UICollectionReusableView* _headerView;
	GKCollectionViewDataSource* _leaderboardDataSource;
	GKLeaderboardScoresDataSource* _globalLeaderboardDataSource;
	GKLeaderboardScoresDataSource* _friendsLeaderboardDataSource;
	GKSectionHeaderView* _leaderboardHeader;
	GKAchievementsDataSource* _achievementsDataSource;
	GKCollectionViewAggregateDataSource* _playersDataSource;
	GKFriendPlayersDataSource* _friendPlayersDataSource;
	GKGameRecentPlayersDataSource* _recentPlayersDataSource;
	GKChallengesDataSource* _challengesDataSource;
	GKSegmentedSectionDataSource* _segmentedDataSource;
	GKSupplementaryViewMetrics* _segmentedControlMetrics;
	NSArray* _actionSheetActions;
	int _numberOfLeaderboardColumnsPortrait;
	int _numberOfLeaderboardColumnsLandscape;
	UIPopoverController* _detailPopover;
	UIActionSheet* _currentActionSheet;
	UIActivityViewController* _currentActivityViewController;
	UIPopoverController* _currentPopoverController;
	id _globalLeaderboardKVOToken;

}

@property (nonatomic,retain) GKGameRecord * game;                                                                   //@synthesize game=_game - In the implementation block
@property (getter=isPurchasableGame) BOOL purchasableGame;                                                          //@synthesize purchasableGame=_purchasableGame - In the implementation block
@property (nonatomic,retain) GKGameRecommendationInternal * recommendation;                                         //@synthesize recommendation=_recommendation - In the implementation block
@property (assign,nonatomic) int viewState;                                                                         //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,retain) NSString * leaderboardIdentifier;                                                      //@synthesize leaderboardIdentifier=_leaderboardIdentifier - In the implementation block
@property (assign,nonatomic) int leaderboardTimeScope;                                                              //@synthesize leaderboardTimeScope=_leaderboardTimeScope - In the implementation block
@property (assign,nonatomic) <GKGameProfileCollectionViewControllerServiceDelegate> * serviceDelegate;              //@synthesize serviceDelegateWeak=_serviceDelegateWeak - In the implementation block
@property (nonatomic,retain) UICollectionReusableView * headerView;                                                 //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateShowcaseRowInUpdateMetrics;                                           //@synthesize shouldUpdateShowcaseRowInUpdateMetrics=_shouldUpdateShowcaseRowInUpdateMetrics - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * leaderboardDataSource;                                    //@synthesize leaderboardDataSource=_leaderboardDataSource - In the implementation block
@property (nonatomic,retain) GKLeaderboardScoresDataSource * globalLeaderboardDataSource;                           //@synthesize globalLeaderboardDataSource=_globalLeaderboardDataSource - In the implementation block
@property (nonatomic,retain) GKLeaderboardScoresDataSource * friendsLeaderboardDataSource;                          //@synthesize friendsLeaderboardDataSource=_friendsLeaderboardDataSource - In the implementation block
@property (nonatomic,retain) GKSectionHeaderView * leaderboardHeader;                                               //@synthesize leaderboardHeader=_leaderboardHeader - In the implementation block
@property (nonatomic,retain) GKAchievementsDataSource * achievementsDataSource;                                     //@synthesize achievementsDataSource=_achievementsDataSource - In the implementation block
@property (nonatomic,retain) GKCollectionViewAggregateDataSource * playersDataSource;                               //@synthesize playersDataSource=_playersDataSource - In the implementation block
@property (nonatomic,retain) GKFriendPlayersDataSource * friendPlayersDataSource;                                   //@synthesize friendPlayersDataSource=_friendPlayersDataSource - In the implementation block
@property (nonatomic,retain) GKGameRecentPlayersDataSource * recentPlayersDataSource;                               //@synthesize recentPlayersDataSource=_recentPlayersDataSource - In the implementation block
@property (nonatomic,retain) GKChallengesDataSource * challengesDataSource;                                         //@synthesize challengesDataSource=_challengesDataSource - In the implementation block
@property (nonatomic,retain) GKSegmentedSectionDataSource * segmentedDataSource;                                    //@synthesize segmentedDataSource=_segmentedDataSource - In the implementation block
@property (nonatomic,retain) GKSupplementaryViewMetrics * segmentedControlMetrics;                                  //@synthesize segmentedControlMetrics=_segmentedControlMetrics - In the implementation block
@property (nonatomic,retain) NSArray * actionSheetActions;                                                          //@synthesize actionSheetActions=_actionSheetActions - In the implementation block
@property (assign,nonatomic) int numberOfLeaderboardColumnsPortrait;                                                //@synthesize numberOfLeaderboardColumnsPortrait=_numberOfLeaderboardColumnsPortrait - In the implementation block
@property (assign,nonatomic) int numberOfLeaderboardColumnsLandscape;                                               //@synthesize numberOfLeaderboardColumnsLandscape=_numberOfLeaderboardColumnsLandscape - In the implementation block
@property (assign,nonatomic) BOOL firstAppearance;                                                                  //@synthesize firstAppearance=_firstAppearance - In the implementation block
@property (assign,nonatomic) BOOL hideHeaderOnRotationToLandscape;                                                  //@synthesize hideHeaderOnRotationToLandscape=_hideHeaderOnRotationToLandscape - In the implementation block
@property (nonatomic,retain) UIPopoverController * detailPopover;                                                   //@synthesize detailPopover=_detailPopover - In the implementation block
@property (nonatomic,retain) UIActionSheet * currentActionSheet;                                                    //@synthesize currentActionSheet=_currentActionSheet - In the implementation block
@property (nonatomic,retain) UIActivityViewController * currentActivityViewController;                              //@synthesize currentActivityViewController=_currentActivityViewController - In the implementation block
@property (nonatomic,retain) UIPopoverController * currentPopoverController;                                        //@synthesize currentPopoverController=_currentPopoverController - In the implementation block
@property (nonatomic,retain) id globalLeaderboardKVOToken;                                                          //@synthesize globalLeaderboardKVOToken=_globalLeaderboardKVOToken - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)didTouchShowMoreFriends:(id)arg1 ;
-(void)addShowcaseCellToMetrics:(id)arg1 ;
-(void)didTouchShowMoreGlobal:(id)arg1 ;
-(void)playGame;
-(id)initWithGame:(id)arg1 purchasableGame:(BOOL)arg2 ;
-(void)headerViewDidLoad;
-(id)segmentedDataSource;
-(void)setSegmentedDataSource:(id)arg1 ;
-(id)segmentedControlMetrics;
-(void)setSegmentedControlMetrics:(id)arg1 ;
-(void)buyGame;
-(void)showLeaderboard:(id)arg1 ;
-(void)registerHeaderFactoryForDataSource:(id)arg1 withFormatter:(/*function pointer*/ void*)arg2 ;
-(void)showAchievementDetails:(id)arg1 fromIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)showScore:(id)arg1 fromCell:(id)arg2 leaderboard:(id)arg3 animated:(BOOL)arg4 ;
-(void)showActions:(id)arg1 ;
-(void)shareGame;
-(void)applyViewState;
-(id)friendsLeaderboardDataSource;
-(id)globalLeaderboardDataSource;
-(id)leaderboardHeader;
-(void)setNumberOfLeaderboardColumnsPortrait:(int)arg1 ;
-(void)setNumberOfLeaderboardColumnsLandscape:(int)arg1 ;
-(void)setFriendsLeaderboardDataSource:(id)arg1 ;
-(void)setGlobalLeaderboardDataSource:(id)arg1 ;
-(void)setGlobalLeaderboardKVOToken:(id)arg1 ;
-(id)configureLeaderboardDataSource;
-(id)segmentedDataSourceForGame:(id)arg1 ;
-(float)leaderboardRowHeight;
-(BOOL)isPurchasableGame;
-(void)showAllLeaderboards:(id)arg1 ;
-(void)setLeaderboardHeader:(id)arg1 ;
-(void)updateShowcaseRowVisibility;
-(id)serviceDelegate;
-(void)updateRightBarButtonItem;
-(void)setCurrentActionSheet:(id)arg1 ;
-(void)setActionSheetActions:(id)arg1 ;
-(id)actionSheetActions;
-(void)setCurrentPopoverController:(id)arg1 ;
-(void)setCurrentActivityViewController:(id)arg1 ;
-(id)recommendation;
-(void)uninstallGame;
-(id)achievementsDataSource;
-(void)showScore:(id)arg1 fromIndexPath:(id)arg2 ;
-(void)showLeaderboardSet:(id)arg1 ;
-(void)showPlayer:(id)arg1 fromIndexPath:(id)arg2 ;
-(void)showChallenge:(id)arg1 ;
-(void)setRecommendation:(id)arg1 ;
-(void)setServiceDelegate:(id)arg1 ;
-(void)removeGame;
-(void)setPurchasableGame:(BOOL)arg1 ;
-(BOOL)shouldUpdateShowcaseRowInUpdateMetrics;
-(void)setShouldUpdateShowcaseRowInUpdateMetrics:(BOOL)arg1 ;
-(id)leaderboardDataSource;
-(void)setLeaderboardDataSource:(id)arg1 ;
-(void)setAchievementsDataSource:(id)arg1 ;
-(id)playersDataSource;
-(void)setPlayersDataSource:(id)arg1 ;
-(id)friendPlayersDataSource;
-(void)setFriendPlayersDataSource:(id)arg1 ;
-(id)challengesDataSource;
-(void)setChallengesDataSource:(id)arg1 ;
-(int)numberOfLeaderboardColumnsPortrait;
-(int)numberOfLeaderboardColumnsLandscape;
-(BOOL)firstAppearance;
-(void)setFirstAppearance:(BOOL)arg1 ;
-(BOOL)hideHeaderOnRotationToLandscape;
-(void)setHideHeaderOnRotationToLandscape:(BOOL)arg1 ;
-(id)currentActionSheet;
-(id)currentActivityViewController;
-(id)currentPopoverController;
-(id)globalLeaderboardKVOToken;
-(void)setLeaderboard:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)configureDataSource;
-(void)didEnterNoContentState;
-(void)configureViewFactories;
-(void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned)arg2 didSelectDataSourceWithIndex:(int)arg3 ;
-(void)updateMetrics;
-(void)setViewState:(int)arg1 ;
-(void)setLeaderboardIdentifier:(id)arg1 ;
-(id)leaderboardIdentifier;
-(void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(int)viewState;
-(int)leaderboardTimeScope;
-(void)setLeaderboardTimeScope:(int)arg1 ;
-(void)setDetailPopover:(id)arg1 ;
-(id)detailPopover;
-(void)setRecentPlayersDataSource:(id)arg1 ;
-(id)recentPlayersDataSource;
-(void)dealloc;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)headerView;
-(void)setHeaderView:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(float)headerHeight;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)dismissPopovers;
@end

