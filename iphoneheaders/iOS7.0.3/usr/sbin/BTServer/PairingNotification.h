/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTServer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BTServer/BTServer-Structs.h>
#import <itunesstored/UserNotification.h>

@interface PairingNotification : UserNotification {

	int _pairingType;
	unsigned _passkey;

}

@property (assign) int pairingType;               //@synthesize pairingType=_pairingType - In the implementation block
@property (assign) unsigned passkey;              //@synthesize passkey=_passkey - In the implementation block
-(id)initWithType:(int)arg1 passkey:(unsigned)arg2 device:(LeUuid)arg3 ;
-(int)pairingType;
-(void)setPairingType:(int)arg1 ;
-(unsigned)passkey;
-(void)setPasskey:(unsigned)arg1 ;
@end
