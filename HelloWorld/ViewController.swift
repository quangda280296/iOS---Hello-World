//
//  ViewController.swift
//  HelloWorld
//
//  Created by Do Huy Nam on 3/17/20.
//  Copyright © 2020 Do Huy Nam. All rights reserved.
//

import UIKit
import NVActivityIndicatorView

class ViewController: UIViewController {

    // MARK: Properties
    @IBOutlet weak var avatarImage: UIImageView!
    @IBOutlet weak var loadingIndicator: NVActivityIndicatorView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        loadingIndicator.startAnimating()
        
        // Load image từ url
        // B1: Tạo URL image
        guard let url = URL(string: "https://laptrinh0kho.com/wp-content/uploads/2019/10/bai9.jpg")
            else {
                return
            }
        
        do {
            // B2: Get data từ url vừa tạo
            let data = try Data(contentsOf: url)
            
            // B3: Set data image cho UIImage view
            avatarImage.image = UIImage(data: data)
        } catch {
            print(error.localizedDescription)
        }
    }

    // MARK: Actions
    @IBAction func showMessage(_ sender: Any) {
        loadingIndicator.stopAnimating()
        let alertController = UIAlertController(title: "Welcome to My First App", message: "Hello World", preferredStyle: UIAlertController.Style.alert)
        alertController.addAction(UIAlertAction(title: "OK", style: UIAlertAction.Style.default, handler: nil))
        present(alertController, animated: true, completion: nil)
    }
}
