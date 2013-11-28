/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SearchManagerObserver, HistoryItem;
#import <Maps/Maps-Structs.h>
@class GEOSearchRequest, NSString, NSMutableArray, NSError, SearchResult, AddressBookAddress, SearchRequestHistoryItem, NSHashTable, NSArray;

@interface SearchManager : NSObject {

	GEOSearchRequest* _activeSearchRequest;
	GEOSearchRequest* _mostRecentSearchRequest;
	NSString* _searchString;
	NSString* _originalRefinementSearchString;
	NSMutableArray* _searchResults;
	NSError* _searchError;
	SearchResult* _selectedSearchResult;
	BOOL _scrollToResults;
	BOOL _resultsModifiedSinceLastLoaded;
	AddressBookAddress* _address;
	SearchRequestHistoryItem* _SearchRequestHistoryItem;
	<SearchManagerObserver>* _delegate;
	int _requestWithoutPromptCount;
	int _minimumRequestsUntilPrompt;
	int _lastUsedSequenceNumber;
	SCD_Struct_Se0 _lastUsedSessionGUID;
	NSHashTable* _observers;
	<HistoryItem>* _searchRequestHistoryItem;

}

@property (nonatomic,retain) <HistoryItem> * searchRequestHistoryItem;                //@synthesize searchRequestHistoryItem=_searchRequestHistoryItem - In the implementation block
@property (nonatomic,copy) NSArray * searchResults;                                   //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSError * searchError;                                   //@synthesize searchError=_searchError - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                 //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) SearchResult * selectedSearchResult;                     //@synthesize selectedSearchResult=_selectedSearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasOnlyDynamicCurrentLocation; 
@property (nonatomic,retain) AddressBookAddress * address;                            //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) GEOSearchRequest * activeSearchRequest;                  //@synthesize activeSearchRequest=_activeSearchRequest - In the implementation block
@property (nonatomic,retain) GEOSearchRequest * mostRecentSearchRequest;              //@synthesize mostRecentSearchRequest=_mostRecentSearchRequest - In the implementation block
@property (nonatomic,retain) NSString * originalRefinementSearchString;               //@synthesize originalRefinementSearchString=_originalRefinementSearchString - In the implementation block
+(id)sharedManager;
-(void)cancelSearches;
-(void)_clearSearchResults;
-(void)setMostRecentSearchRequest:(id)arg1 ;
-(void)setSearchError:(id)arg1 ;
-(void)setSelectedSearchResult:(id)arg1 ;
-(void)setSearchRequestHistoryItem:(id)arg1 ;
-(void)assignSessionAndSequenceNumberToRequest:(id)arg1 ;
-(void)clearSearchResults;
-(void)setActiveSearchRequest:(id)arg1 ;
-(void)_searchReceivedResults:(id)arg1 ;
-(void)_searchCanceled;
-(void)setOriginalRefinementSearchString:(id)arg1 ;
-(id)searchRequestHistoryItem;
-(void)_searchFailedWithError:(id)arg1 ;
-(id)originalRefinementSearchString;
-(void)_searchForRequest:(id)arg1 displayQuery:(id)arg2 defaultSearchResultType:(unsigned)arg3 saveToHistory:(BOOL)arg4 scrollToResults:(BOOL)arg5 source:(int)arg6 ;
-(id)searchInfoForPlace:(id)arg1 request:(id)arg2 defaultSearchResultType:(unsigned)arg3 ;
-(id)searchInfoForAppleGeocoderRefinements:(id)arg1 request:(id)arg2 ;
-(void)handleAppleGeocoderError:(id)arg1 ;
-(void)forwardGeocode:(id)arg1 defaultSearchResultType:(unsigned)arg2 source:(int)arg3 ;
-(void)searchForSearchResults:(id)arg1 completedQuery:(id)arg2 ;
-(void)searchForSearchResult:(id)arg1 completedQuery:(id)arg2 ;
-(void)searchForAddress:(id)arg1 completedQuery:(id)arg2 source:(int)arg3 ;
-(void)searchForAddressString:(id)arg1 source:(int)arg2 ;
-(void)searchForString:(id)arg1 displayQuery:(id)arg2 mapViewSearchInfo:(id)arg3 defaultSearchResultType:(unsigned)arg4 completedQuery:(id)arg5 scrollToResults:(BOOL)arg6 source:(int)arg7 ;
-(void)searchForAddressString:(id)arg1 defaultSearchResultType:(unsigned)arg2 source:(int)arg3 ;
-(void)searchForBusinessUID:(unsigned long long)arg1 localSearchProvider:(int)arg2 query:(id)arg3 coordinate:(SCD_Struct_Se1)arg4 defaultSearchResultType:(unsigned)arg5 source:(int)arg6 ;
-(void)recordAction:(int)arg1 searchResult:(id)arg2 ;
-(BOOL)hasOnlyDynamicCurrentLocation;
-(void)replaceSearchResult:(id)arg1 withSearchResult:(id)arg2 ;
-(void)searchForCompletion:(id)arg1 mapViewSearchInfo:(id)arg2 source:(int)arg3 ;
-(void)searchForString:(id)arg1 coordinate:(SCD_Struct_Se1)arg2 source:(int)arg3 ;
-(void)searchForHistoryItem:(id)arg1 completedQuery:(id)arg2 source:(int)arg3 ;
-(void)resolveRefinementForSearch:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)searchForString:(id)arg1 displayQuery:(id)arg2 mapViewSearchInfo:(id)arg3 completedQuery:(id)arg4 scrollToResults:(BOOL)arg5 source:(int)arg6 ;
-(void)searchForString:(id)arg1 displayQuery:(id)arg2 mapViewSearchInfo:(id)arg3 scrollToResults:(BOOL)arg4 source:(int)arg5 ;
-(void)searchForAddress:(id)arg1 source:(int)arg2 ;
-(void)searchForBusinessUID:(unsigned long long)arg1 localSearchProvider:(int)arg2 query:(id)arg3 coordinate:(SCD_Struct_Se1)arg4 source:(int)arg5 ;
-(BOOL)writeSearchResultsType:(int)arg1 ;
-(void)readSearchResultsType:(int)arg1 ;
-(void)recordActionForActivity:(id)arg1 withSearchResult:(id)arg2 ;
-(id)searchError;
-(id)selectedSearchResult;
-(id)activeSearchRequest;
-(id)mostRecentSearchRequest;
-(id)printedPageTitle;
-(id)printedPageSubtitle;
-(void)setAddress:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)setSearchString:(id)arg1 ;
-(id)searchString;
-(void)addObserver:(id)arg1 ;
-(id)searchResults;
-(void)setSearchResults:(id)arg1 ;
-(void)_handleMemoryWarning:(id)arg1 ;
-(id)address;
@end

