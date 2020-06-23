//
//  SPUDownloaderProtocol.h
//  PersistentDownloader
//
//  Created by Mayur Pawashe on 4/1/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#if __has_feature(modules)
#pragma clang diagnostic push
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
#pragma clang diagnostic pop
#else
#import <Foundation/Foundation.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class SPUURLRequest;

// The protocol that this service will vend as its API. This header file will also need to be visible to the process hosting the service.
@protocol SPUDownloaderProtocol

- (void)startPersistentDownloadWithRequest:(SPUURLRequest *)request bundleIdentifier:(NSString *)bundleIdentifier desiredFilename:(NSString *)desiredFilename;

- (void)startTemporaryDownloadWithRequest:(SPUURLRequest *)request;

- (void)downloadDidFinish;

- (void)cleanup;

- (void)cancel;

@end

NS_ASSUME_NONNULL_END
