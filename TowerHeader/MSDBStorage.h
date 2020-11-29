//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface MSDBStorage : NSObject
{
    NSURL *_dbFileURL;
    long long _maxSizeInBytes;
    long long _pageSize;
    NSDictionary *_schema;
}

+ (int)configureSQLite;
+ (int)setMaxPageCount:(long long)arg1 inOpenedDatabase:(void *)arg2;
+ (long long)querySingleValue:(id)arg1 inOpenedDatabase:(void *)arg2;
+ (long long)getMaxPageCountInOpenedDatabase:(void *)arg1;
+ (long long)getPageCountInOpenedDatabase:(void *)arg1;
+ (long long)getPageSizeInOpenedDatabase:(void *)arg1;
+ (struct sqlite3 *)openDatabaseAtFileURL:(id)arg1 withResult:(int *)arg2;
+ (id)columnValueFromStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;
+ (id)executeSelectionQuery:(id)arg1 inOpenedDatabase:(void *)arg2 result:(int *)arg3 withValues:(id)arg4;
+ (id)executeSelectionQuery:(id)arg1 inOpenedDatabase:(void *)arg2 withValues:(id)arg3;
+ (int)executeQuery:(id)arg1 inOpenedDatabase:(void *)arg2 withValues:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (int)executeNonSelectionQuery:(id)arg1 inOpenedDatabase:(void *)arg2 withValues:(id)arg3;
+ (int)executeNonSelectionQuery:(id)arg1 inOpenedDatabase:(void *)arg2;
+ (void)enableAutoVacuumInOpenedDatabase:(void *)arg1;
+ (void)setVersion:(unsigned long long)arg1 inOpenedDatabase:(void *)arg2;
+ (unsigned long long)versionInOpenedDatabase:(void *)arg1 result:(int *)arg2;
+ (BOOL)tableExists:(id)arg1 inOpenedDatabase:(void *)arg2 result:(int *)arg3;
+ (BOOL)tableExists:(id)arg1 inOpenedDatabase:(void *)arg2;
+ (id)columnsIndexes:(id)arg1;
+ (int)createTablesWithSchema:(id)arg1 inOpenedDatabase:(void *)arg2;
+ (id)columnsQueryFromColumnsSchema:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *schema; // @synthesize schema=_schema;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long maxSizeInBytes; // @synthesize maxSizeInBytes=_maxSizeInBytes;
@property(retain, nonatomic) NSURL *dbFileURL; // @synthesize dbFileURL=_dbFileURL;
- (void)setMaxStorageSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)migrateDatabase:(void *)arg1 fromVersion:(unsigned long long)arg2;
- (void)customizeDatabase:(void *)arg1;
- (id)executeSelectionQuery:(id)arg1 withValues:(id)arg2;
- (int)executeNonSelectionQuery:(id)arg1 withValues:(id)arg2;
- (int)executeNonSelectionQuery:(id)arg1;
- (unsigned long long)countEntriesForTable:(id)arg1 condition:(id)arg2 withValues:(id)arg3;
- (BOOL)createTable:(id)arg1 columnsSchema:(id)arg2;
- (BOOL)dropTable:(id)arg1;
- (void)dropDatabase;
- (int)executeQueryUsingBlock:(CDUnknownBlockType)arg1;
- (int)configureDatabaseWithSchema:(id)arg1 version:(unsigned long long)arg2 filename:(id)arg3;
- (id)initWithVersion:(unsigned long long)arg1 filename:(id)arg2;
- (id)initWithSchema:(id)arg1 version:(unsigned long long)arg2 filename:(id)arg3;

@end
