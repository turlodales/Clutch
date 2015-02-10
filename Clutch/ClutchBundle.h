//
//  ClutchBundle.h
//  Clutch
//
//  Created by Anton Titkov on 10.02.15.
//
//

#import <Foundation/Foundation.h>
#import "Binary.h"

@interface ClutchBundle : NSBundle

@property (readonly) Binary *executable;
@property (readonly) BOOL hasARMSlice;
@property (readonly) BOOL hasARM64Slice;

- (instancetype)initWithAppInfo:(NSDictionary *)info;
- (void)dumpToDirectoryURL:(NSURL *)directoryURL;

@end