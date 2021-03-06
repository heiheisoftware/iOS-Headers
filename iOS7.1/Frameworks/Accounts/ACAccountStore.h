//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface ACAccountStore : NSObject
{
    NSXPCConnection *_connection;
    NSString *_clientBundleID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _shouldSendClientState;
    BOOL _notificationsEnabled;
    id _daemonAccountStoreDidChangeObserver;
    id <ACDAccountStoreProtocol> _remoteAccountStore;
}

+ (BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (int)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
@property(retain, nonatomic) id <ACDAccountStoreProtocol> remoteAccountStore; // @synthesize remoteAccountStore=_remoteAccountStore;
@property(readonly) NSString *effectiveBundleID; // @synthesize effectiveBundleID=_clientBundleID;
- (void).cxx_destruct;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)clientTokenForAccount:(id)arg1;
- (void)handleURL:(id)arg1;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isPushSupportedForAccount:(id)arg1;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (BOOL)hasAccountWithDescription:(id)arg1;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (BOOL)permissionForAccountType:(id)arg1;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1 error:(id *)arg2;
- (id)credentialForAccount:(id)arg1;
- (id)allDataclasses;
- (id)allAccountTypes;
- (void)promptForWebLoginForAccount:(id)arg1 atURL:(id)arg2 callbackURL:(id)arg3 force:(BOOL)arg4 reason:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)renewCredentialsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)accountsWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountsWithAccountType:(id)arg1;
@property(readonly, nonatomic) NSArray *accounts;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (void)disconnectFromRemoteAccountStore;
- (void)_connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (id)_remoteAccountStore;
- (void)dealloc;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)init;

@end

