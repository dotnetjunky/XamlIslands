﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyWinFormsApp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            //this.windowsXamlHost1.InitialTypeName = "Windows.UI.Xaml.Controls.TextBox";
            //this.windowsXamlHost1.InitialTypeName = "Windows.UI.Xaml.Controls.ColorPicker";
            this.windowsXamlHost1.InitialTypeName = "MyUWPLib.MainPage";
        }
    }
}
