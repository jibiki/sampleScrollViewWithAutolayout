//
//  MasterViewController.h
//  sampleScrollViewWithAutolayout
//
//  Created by 地引秀和 on 2014/07/01.
//  Copyright (c) 2014年 Jibiki Wroks. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
