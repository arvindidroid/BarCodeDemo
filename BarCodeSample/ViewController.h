//
//  ViewController.h
//  BarCodeSample
//
//  Created by Parth Dobariya on 02/01/16.
//  Copyright (c) 2016 Parth Dobariya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBarSDK.h"
@interface ViewController : UIViewController <ZBarReaderDelegate>

@property (weak, nonatomic) IBOutlet UIButton *btnScan;

@end

