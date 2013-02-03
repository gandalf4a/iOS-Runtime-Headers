/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSMutableSet;

@interface CalDAVCalendarServerUpdateItem : CoreDAVItem {
    NSMutableSet *_recurrences;
}

@property(retain) NSMutableSet * recurrences;

- (void)addRecurrence:(id)arg1;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)recurrences;
- (void)setRecurrences:(id)arg1;

@end