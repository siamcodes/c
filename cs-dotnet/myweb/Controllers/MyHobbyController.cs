using Microsoft.AspNetCore.Mvc;

namespace myweb.Controllers
{
    public class MyHobbyController: Controller
    {
        public IActionResult Index(){
            return View();
        }
        
    }
}